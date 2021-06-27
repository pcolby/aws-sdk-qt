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

#include "getqueueresponse.h"
#include "getqueueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::GetQueueResponse
 * \brief The GetQueueResponse class provides an interace for MediaConvert GetQueue responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::getQueue
 */

/*!
 * Constructs a GetQueueResponse object for \a reply to \a request, with parent \a parent.
 */
GetQueueResponse::GetQueueResponse(
        const GetQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new GetQueueResponsePrivate(this), parent)
{
    setRequest(new GetQueueRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQueueRequest * GetQueueResponse::request() const
{
    return static_cast<const GetQueueRequest *>(MediaConvertResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaConvert GetQueue \a response.
 */
void GetQueueResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetQueueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::GetQueueResponsePrivate
 * \brief The GetQueueResponsePrivate class provides private implementation for GetQueueResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a GetQueueResponsePrivate object with public implementation \a q.
 */
GetQueueResponsePrivate::GetQueueResponsePrivate(
    GetQueueResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert GetQueue response element from \a xml.
 */
void GetQueueResponsePrivate::parseGetQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueueResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
