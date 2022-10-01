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

#include "updatestreammoderesponse.h"
#include "updatestreammoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::UpdateStreamModeResponse
 * \brief The UpdateStreamModeResponse class provides an interace for Kinesis UpdateStreamMode responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::updateStreamMode
 */

/*!
 * Constructs a UpdateStreamModeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStreamModeResponse::UpdateStreamModeResponse(
        const UpdateStreamModeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new UpdateStreamModeResponsePrivate(this), parent)
{
    setRequest(new UpdateStreamModeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStreamModeRequest * UpdateStreamModeResponse::request() const
{
    Q_D(const UpdateStreamModeResponse);
    return static_cast<const UpdateStreamModeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis UpdateStreamMode \a response.
 */
void UpdateStreamModeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStreamModeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::UpdateStreamModeResponsePrivate
 * \brief The UpdateStreamModeResponsePrivate class provides private implementation for UpdateStreamModeResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a UpdateStreamModeResponsePrivate object with public implementation \a q.
 */
UpdateStreamModeResponsePrivate::UpdateStreamModeResponsePrivate(
    UpdateStreamModeResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis UpdateStreamMode response element from \a xml.
 */
void UpdateStreamModeResponsePrivate::parseUpdateStreamModeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStreamModeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
