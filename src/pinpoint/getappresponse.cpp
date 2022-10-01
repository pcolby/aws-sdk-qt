// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getappresponse.h"
#include "getappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetAppResponse
 * \brief The GetAppResponse class provides an interace for Pinpoint GetApp responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApp
 */

/*!
 * Constructs a GetAppResponse object for \a reply to \a request, with parent \a parent.
 */
GetAppResponse::GetAppResponse(
        const GetAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetAppResponsePrivate(this), parent)
{
    setRequest(new GetAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAppRequest * GetAppResponse::request() const
{
    Q_D(const GetAppResponse);
    return static_cast<const GetAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApp \a response.
 */
void GetAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetAppResponsePrivate
 * \brief The GetAppResponsePrivate class provides private implementation for GetAppResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetAppResponsePrivate object with public implementation \a q.
 */
GetAppResponsePrivate::GetAppResponsePrivate(
    GetAppResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApp response element from \a xml.
 */
void GetAppResponsePrivate::parseGetAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
