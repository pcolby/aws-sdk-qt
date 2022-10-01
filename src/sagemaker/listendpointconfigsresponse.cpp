// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listendpointconfigsresponse.h"
#include "listendpointconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListEndpointConfigsResponse
 * \brief The ListEndpointConfigsResponse class provides an interace for SageMaker ListEndpointConfigs responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listEndpointConfigs
 */

/*!
 * Constructs a ListEndpointConfigsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEndpointConfigsResponse::ListEndpointConfigsResponse(
        const ListEndpointConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListEndpointConfigsResponsePrivate(this), parent)
{
    setRequest(new ListEndpointConfigsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEndpointConfigsRequest * ListEndpointConfigsResponse::request() const
{
    Q_D(const ListEndpointConfigsResponse);
    return static_cast<const ListEndpointConfigsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListEndpointConfigs \a response.
 */
void ListEndpointConfigsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEndpointConfigsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListEndpointConfigsResponsePrivate
 * \brief The ListEndpointConfigsResponsePrivate class provides private implementation for ListEndpointConfigsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListEndpointConfigsResponsePrivate object with public implementation \a q.
 */
ListEndpointConfigsResponsePrivate::ListEndpointConfigsResponsePrivate(
    ListEndpointConfigsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListEndpointConfigs response element from \a xml.
 */
void ListEndpointConfigsResponsePrivate::parseListEndpointConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEndpointConfigsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
