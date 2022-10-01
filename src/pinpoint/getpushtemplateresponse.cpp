// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpushtemplateresponse.h"
#include "getpushtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetPushTemplateResponse
 * \brief The GetPushTemplateResponse class provides an interace for Pinpoint GetPushTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getPushTemplate
 */

/*!
 * Constructs a GetPushTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetPushTemplateResponse::GetPushTemplateResponse(
        const GetPushTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetPushTemplateResponsePrivate(this), parent)
{
    setRequest(new GetPushTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPushTemplateRequest * GetPushTemplateResponse::request() const
{
    Q_D(const GetPushTemplateResponse);
    return static_cast<const GetPushTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetPushTemplate \a response.
 */
void GetPushTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPushTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetPushTemplateResponsePrivate
 * \brief The GetPushTemplateResponsePrivate class provides private implementation for GetPushTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetPushTemplateResponsePrivate object with public implementation \a q.
 */
GetPushTemplateResponsePrivate::GetPushTemplateResponsePrivate(
    GetPushTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetPushTemplate response element from \a xml.
 */
void GetPushTemplateResponsePrivate::parseGetPushTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPushTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
