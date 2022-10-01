// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
