// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getemailtemplateresponse.h"
#include "getemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetEmailTemplateResponse
 * \brief The GetEmailTemplateResponse class provides an interace for Pinpoint GetEmailTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getEmailTemplate
 */

/*!
 * Constructs a GetEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetEmailTemplateResponse::GetEmailTemplateResponse(
        const GetEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new GetEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEmailTemplateRequest * GetEmailTemplateResponse::request() const
{
    Q_D(const GetEmailTemplateResponse);
    return static_cast<const GetEmailTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetEmailTemplate \a response.
 */
void GetEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetEmailTemplateResponsePrivate
 * \brief The GetEmailTemplateResponsePrivate class provides private implementation for GetEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetEmailTemplateResponsePrivate object with public implementation \a q.
 */
GetEmailTemplateResponsePrivate::GetEmailTemplateResponsePrivate(
    GetEmailTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetEmailTemplate response element from \a xml.
 */
void GetEmailTemplateResponsePrivate::parseGetEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
