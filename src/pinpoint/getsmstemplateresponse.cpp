// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsmstemplateresponse.h"
#include "getsmstemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSmsTemplateResponse
 * \brief The GetSmsTemplateResponse class provides an interace for Pinpoint GetSmsTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSmsTemplate
 */

/*!
 * Constructs a GetSmsTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetSmsTemplateResponse::GetSmsTemplateResponse(
        const GetSmsTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSmsTemplateResponsePrivate(this), parent)
{
    setRequest(new GetSmsTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSmsTemplateRequest * GetSmsTemplateResponse::request() const
{
    Q_D(const GetSmsTemplateResponse);
    return static_cast<const GetSmsTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSmsTemplate \a response.
 */
void GetSmsTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSmsTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSmsTemplateResponsePrivate
 * \brief The GetSmsTemplateResponsePrivate class provides private implementation for GetSmsTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSmsTemplateResponsePrivate object with public implementation \a q.
 */
GetSmsTemplateResponsePrivate::GetSmsTemplateResponsePrivate(
    GetSmsTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSmsTemplate response element from \a xml.
 */
void GetSmsTemplateResponsePrivate::parseGetSmsTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSmsTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
