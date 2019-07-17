/*
    Copyright 2013-2019 Paul Colby

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

#include "listjobsbystatusresponse.h"
#include "listjobsbystatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ListJobsByStatusResponse
 * \brief The ListJobsByStatusResponse class provides an interace for ElasticTranscoder ListJobsByStatus responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::listJobsByStatus
 */

/*!
 * Constructs a ListJobsByStatusResponse object for \a reply to \a request, with parent \a parent.
 */
ListJobsByStatusResponse::ListJobsByStatusResponse(
        const ListJobsByStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new ListJobsByStatusResponsePrivate(this), parent)
{
    setRequest(new ListJobsByStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJobsByStatusRequest * ListJobsByStatusResponse::request() const
{
    Q_D(const ListJobsByStatusResponse);
    return static_cast<const ListJobsByStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder ListJobsByStatus \a response.
 */
void ListJobsByStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJobsByStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::ListJobsByStatusResponsePrivate
 * \brief The ListJobsByStatusResponsePrivate class provides private implementation for ListJobsByStatusResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ListJobsByStatusResponsePrivate object with public implementation \a q.
 */
ListJobsByStatusResponsePrivate::ListJobsByStatusResponsePrivate(
    ListJobsByStatusResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder ListJobsByStatus response element from \a xml.
 */
void ListJobsByStatusResponsePrivate::parseListJobsByStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobsByStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
