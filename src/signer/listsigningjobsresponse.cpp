/*
    Copyright 2013-2020 Paul Colby

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

#include "listsigningjobsresponse.h"
#include "listsigningjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace signer {

/*!
 * \class QtAws::signer::ListSigningJobsResponse
 * \brief The ListSigningJobsResponse class provides an interace for signer ListSigningJobs responses.
 *
 * \inmodule QtAwssigner
 *
 *  You can use Code Signing for Amazon FreeRTOS (AWS Signer) to sign code that you created for any of the IoT devices that
 *  Amazon Web Services supports. AWS Signer is integrated with Amazon FreeRTOS, AWS Certificate Manager, and AWS
 *  CloudTrail. Amazon FreeRTOS customers can use AWS Signer to sign code images before making them available for
 *  microcontrollers. You can use ACM to import third-party certificates to be used by AWS Signer. For general information
 *  about using AWS Signer, see the <a href="http://docs.aws.amazon.com/signer/latest/developerguide/Welcome.html">Code
 *  Signing for Amazon FreeRTOS Developer
 *
 * \sa signerClient::listSigningJobs
 */

/*!
 * Constructs a ListSigningJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSigningJobsResponse::ListSigningJobsResponse(
        const ListSigningJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : signerResponse(new ListSigningJobsResponsePrivate(this), parent)
{
    setRequest(new ListSigningJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSigningJobsRequest * ListSigningJobsResponse::request() const
{
    Q_D(const ListSigningJobsResponse);
    return static_cast<const ListSigningJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful signer ListSigningJobs \a response.
 */
void ListSigningJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSigningJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::signer::ListSigningJobsResponsePrivate
 * \brief The ListSigningJobsResponsePrivate class provides private implementation for ListSigningJobsResponse.
 * \internal
 *
 * \inmodule QtAwssigner
 */

/*!
 * Constructs a ListSigningJobsResponsePrivate object with public implementation \a q.
 */
ListSigningJobsResponsePrivate::ListSigningJobsResponsePrivate(
    ListSigningJobsResponse * const q) : signerResponsePrivate(q)
{

}

/*!
 * Parses a signer ListSigningJobs response element from \a xml.
 */
void ListSigningJobsResponsePrivate::parseListSigningJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSigningJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace signer
} // namespace QtAws
