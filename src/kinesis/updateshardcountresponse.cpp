/*
    Copyright 2013-2018 Paul Colby

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

#include "updateshardcountresponse.h"
#include "updateshardcountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::UpdateShardCountResponse
 * \brief The UpdateShardCountResponse class provides an interace for Kinesis UpdateShardCount responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::updateShardCount
 */

/*!
 * Constructs a UpdateShardCountResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateShardCountResponse::UpdateShardCountResponse(
        const UpdateShardCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new UpdateShardCountResponsePrivate(this), parent)
{
    setRequest(new UpdateShardCountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateShardCountRequest * UpdateShardCountResponse::request() const
{
    Q_D(const UpdateShardCountResponse);
    return static_cast<const UpdateShardCountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis UpdateShardCount \a response.
 */
void UpdateShardCountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateShardCountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::UpdateShardCountResponsePrivate
 * \brief The UpdateShardCountResponsePrivate class provides private implementation for UpdateShardCountResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a UpdateShardCountResponsePrivate object with public implementation \a q.
 */
UpdateShardCountResponsePrivate::UpdateShardCountResponsePrivate(
    UpdateShardCountResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis UpdateShardCount response element from \a xml.
 */
void UpdateShardCountResponsePrivate::parseUpdateShardCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateShardCountResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
