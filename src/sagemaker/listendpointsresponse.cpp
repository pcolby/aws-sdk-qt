// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listendpointsresponse.h"
#include "listendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListEndpointsResponse
 * \brief The ListEndpointsResponse class provides an interace for SageMaker ListEndpoints responses.
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
 * \sa SageMakerClient::listEndpoints
 */

/*!
 * Constructs a ListEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEndpointsResponse::ListEndpointsResponse(
        const ListEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListEndpointsResponsePrivate(this), parent)
{
    setRequest(new ListEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEndpointsRequest * ListEndpointsResponse::request() const
{
    Q_D(const ListEndpointsResponse);
    return static_cast<const ListEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListEndpoints \a response.
 */
void ListEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListEndpointsResponsePrivate
 * \brief The ListEndpointsResponsePrivate class provides private implementation for ListEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListEndpointsResponsePrivate object with public implementation \a q.
 */
ListEndpointsResponsePrivate::ListEndpointsResponsePrivate(
    ListEndpointsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListEndpoints response element from \a xml.
 */
void ListEndpointsResponsePrivate::parseListEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
