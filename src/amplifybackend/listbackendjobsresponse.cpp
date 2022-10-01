// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbackendjobsresponse.h"
#include "listbackendjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::ListBackendJobsResponse
 * \brief The ListBackendJobsResponse class provides an interace for AmplifyBackend ListBackendJobs responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::listBackendJobs
 */

/*!
 * Constructs a ListBackendJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBackendJobsResponse::ListBackendJobsResponse(
        const ListBackendJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new ListBackendJobsResponsePrivate(this), parent)
{
    setRequest(new ListBackendJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBackendJobsRequest * ListBackendJobsResponse::request() const
{
    Q_D(const ListBackendJobsResponse);
    return static_cast<const ListBackendJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend ListBackendJobs \a response.
 */
void ListBackendJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBackendJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::ListBackendJobsResponsePrivate
 * \brief The ListBackendJobsResponsePrivate class provides private implementation for ListBackendJobsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a ListBackendJobsResponsePrivate object with public implementation \a q.
 */
ListBackendJobsResponsePrivate::ListBackendJobsResponsePrivate(
    ListBackendJobsResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend ListBackendJobs response element from \a xml.
 */
void ListBackendJobsResponsePrivate::parseListBackendJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackendJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
