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

#include "readjobresponse.h"
#include "readjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ReadJobResponse
 * \brief The ReadJobResponse class provides an interace for ElasticTranscoder ReadJob responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::readJob
 */

/*!
 * Constructs a ReadJobResponse object for \a reply to \a request, with parent \a parent.
 */
ReadJobResponse::ReadJobResponse(
        const ReadJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new ReadJobResponsePrivate(this), parent)
{
    setRequest(new ReadJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReadJobRequest * ReadJobResponse::request() const
{
    Q_D(const ReadJobResponse);
    return static_cast<const ReadJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder ReadJob \a response.
 */
void ReadJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReadJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::ReadJobResponsePrivate
 * \brief The ReadJobResponsePrivate class provides private implementation for ReadJobResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ReadJobResponsePrivate object with public implementation \a q.
 */
ReadJobResponsePrivate::ReadJobResponsePrivate(
    ReadJobResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder ReadJob response element from \a xml.
 */
void ReadJobResponsePrivate::parseReadJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReadJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
