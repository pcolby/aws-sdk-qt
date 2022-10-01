// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappsresponse.h"
#include "listappsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAppsResponse
 * \brief The ListAppsResponse class provides an interace for SageMaker ListApps responses.
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
 * \sa SageMakerClient::listApps
 */

/*!
 * Constructs a ListAppsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppsResponse::ListAppsResponse(
        const ListAppsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListAppsResponsePrivate(this), parent)
{
    setRequest(new ListAppsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppsRequest * ListAppsResponse::request() const
{
    Q_D(const ListAppsResponse);
    return static_cast<const ListAppsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListApps \a response.
 */
void ListAppsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListAppsResponsePrivate
 * \brief The ListAppsResponsePrivate class provides private implementation for ListAppsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAppsResponsePrivate object with public implementation \a q.
 */
ListAppsResponsePrivate::ListAppsResponsePrivate(
    ListAppsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListApps response element from \a xml.
 */
void ListAppsResponsePrivate::parseListAppsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
