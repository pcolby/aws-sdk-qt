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

#include "canceljobresponse.h"
#include "canceljobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::CancelJobResponse
 * \brief The CancelJobResponse class provides an interace for ElasticTranscoder CancelJob responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::cancelJob
 */

/*!
 * Constructs a CancelJobResponse object for \a reply to \a request, with parent \a parent.
 */
CancelJobResponse::CancelJobResponse(
        const CancelJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new CancelJobResponsePrivate(this), parent)
{
    setRequest(new CancelJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelJobRequest * CancelJobResponse::request() const
{
    Q_D(const CancelJobResponse);
    return static_cast<const CancelJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder CancelJob \a response.
 */
void CancelJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::CancelJobResponsePrivate
 * \brief The CancelJobResponsePrivate class provides private implementation for CancelJobResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a CancelJobResponsePrivate object with public implementation \a q.
 */
CancelJobResponsePrivate::CancelJobResponsePrivate(
    CancelJobResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder CancelJob response element from \a xml.
 */
void CancelJobResponsePrivate::parseCancelJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
