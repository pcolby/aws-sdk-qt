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

#include "listmedicaltranscriptionjobsresponse.h"
#include "listmedicaltranscriptionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::ListMedicalTranscriptionJobsResponse
 * \brief The ListMedicalTranscriptionJobsResponse class provides an interace for TranscribeService ListMedicalTranscriptionJobs responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::listMedicalTranscriptionJobs
 */

/*!
 * Constructs a ListMedicalTranscriptionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMedicalTranscriptionJobsResponse::ListMedicalTranscriptionJobsResponse(
        const ListMedicalTranscriptionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new ListMedicalTranscriptionJobsResponsePrivate(this), parent)
{
    setRequest(new ListMedicalTranscriptionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMedicalTranscriptionJobsRequest * ListMedicalTranscriptionJobsResponse::request() const
{
    Q_D(const ListMedicalTranscriptionJobsResponse);
    return static_cast<const ListMedicalTranscriptionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TranscribeService ListMedicalTranscriptionJobs \a response.
 */
void ListMedicalTranscriptionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMedicalTranscriptionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::ListMedicalTranscriptionJobsResponsePrivate
 * \brief The ListMedicalTranscriptionJobsResponsePrivate class provides private implementation for ListMedicalTranscriptionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a ListMedicalTranscriptionJobsResponsePrivate object with public implementation \a q.
 */
ListMedicalTranscriptionJobsResponsePrivate::ListMedicalTranscriptionJobsResponsePrivate(
    ListMedicalTranscriptionJobsResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService ListMedicalTranscriptionJobs response element from \a xml.
 */
void ListMedicalTranscriptionJobsResponsePrivate::parseListMedicalTranscriptionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMedicalTranscriptionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
