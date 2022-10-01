// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvoicetemplateresponse.h"
#include "getvoicetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetVoiceTemplateResponse
 * \brief The GetVoiceTemplateResponse class provides an interace for Pinpoint GetVoiceTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getVoiceTemplate
 */

/*!
 * Constructs a GetVoiceTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetVoiceTemplateResponse::GetVoiceTemplateResponse(
        const GetVoiceTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetVoiceTemplateResponsePrivate(this), parent)
{
    setRequest(new GetVoiceTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVoiceTemplateRequest * GetVoiceTemplateResponse::request() const
{
    Q_D(const GetVoiceTemplateResponse);
    return static_cast<const GetVoiceTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetVoiceTemplate \a response.
 */
void GetVoiceTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVoiceTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetVoiceTemplateResponsePrivate
 * \brief The GetVoiceTemplateResponsePrivate class provides private implementation for GetVoiceTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetVoiceTemplateResponsePrivate object with public implementation \a q.
 */
GetVoiceTemplateResponsePrivate::GetVoiceTemplateResponsePrivate(
    GetVoiceTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetVoiceTemplate response element from \a xml.
 */
void GetVoiceTemplateResponsePrivate::parseGetVoiceTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVoiceTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
