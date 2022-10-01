// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappimageconfigsresponse.h"
#include "listappimageconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAppImageConfigsResponse
 * \brief The ListAppImageConfigsResponse class provides an interace for SageMaker ListAppImageConfigs responses.
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
 * \sa SageMakerClient::listAppImageConfigs
 */

/*!
 * Constructs a ListAppImageConfigsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppImageConfigsResponse::ListAppImageConfigsResponse(
        const ListAppImageConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListAppImageConfigsResponsePrivate(this), parent)
{
    setRequest(new ListAppImageConfigsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppImageConfigsRequest * ListAppImageConfigsResponse::request() const
{
    Q_D(const ListAppImageConfigsResponse);
    return static_cast<const ListAppImageConfigsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListAppImageConfigs \a response.
 */
void ListAppImageConfigsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppImageConfigsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListAppImageConfigsResponsePrivate
 * \brief The ListAppImageConfigsResponsePrivate class provides private implementation for ListAppImageConfigsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAppImageConfigsResponsePrivate object with public implementation \a q.
 */
ListAppImageConfigsResponsePrivate::ListAppImageConfigsResponsePrivate(
    ListAppImageConfigsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListAppImageConfigs response element from \a xml.
 */
void ListAppImageConfigsResponsePrivate::parseListAppImageConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppImageConfigsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
