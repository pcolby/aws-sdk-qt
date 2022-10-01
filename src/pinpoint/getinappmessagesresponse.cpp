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

#include "getinappmessagesresponse.h"
#include "getinappmessagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetInAppMessagesResponse
 * \brief The GetInAppMessagesResponse class provides an interace for Pinpoint GetInAppMessages responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getInAppMessages
 */

/*!
 * Constructs a GetInAppMessagesResponse object for \a reply to \a request, with parent \a parent.
 */
GetInAppMessagesResponse::GetInAppMessagesResponse(
        const GetInAppMessagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetInAppMessagesResponsePrivate(this), parent)
{
    setRequest(new GetInAppMessagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInAppMessagesRequest * GetInAppMessagesResponse::request() const
{
    Q_D(const GetInAppMessagesResponse);
    return static_cast<const GetInAppMessagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetInAppMessages \a response.
 */
void GetInAppMessagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInAppMessagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetInAppMessagesResponsePrivate
 * \brief The GetInAppMessagesResponsePrivate class provides private implementation for GetInAppMessagesResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetInAppMessagesResponsePrivate object with public implementation \a q.
 */
GetInAppMessagesResponsePrivate::GetInAppMessagesResponsePrivate(
    GetInAppMessagesResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetInAppMessages response element from \a xml.
 */
void GetInAppMessagesResponsePrivate::parseGetInAppMessagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInAppMessagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
