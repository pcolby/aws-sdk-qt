/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listtranscriptionjobsresponse.h"
#include "listtranscriptionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::ListTranscriptionJobsResponse
 * \brief The ListTranscriptionJobsResponse class provides an interace for TranscribeService ListTranscriptionJobs responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::listTranscriptionJobs
 */

/*!
 * Constructs a ListTranscriptionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTranscriptionJobsResponse::ListTranscriptionJobsResponse(
        const ListTranscriptionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new ListTranscriptionJobsResponsePrivate(this), parent)
{
    setRequest(new ListTranscriptionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTranscriptionJobsRequest * ListTranscriptionJobsResponse::request() const
{
    return static_cast<const ListTranscriptionJobsRequest *>(TranscribeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeService ListTranscriptionJobs \a response.
 */
void ListTranscriptionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTranscriptionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::ListTranscriptionJobsResponsePrivate
 * \brief The ListTranscriptionJobsResponsePrivate class provides private implementation for ListTranscriptionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a ListTranscriptionJobsResponsePrivate object with public implementation \a q.
 */
ListTranscriptionJobsResponsePrivate::ListTranscriptionJobsResponsePrivate(
    ListTranscriptionJobsResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService ListTranscriptionJobs response element from \a xml.
 */
void ListTranscriptionJobsResponsePrivate::parseListTranscriptionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTranscriptionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
