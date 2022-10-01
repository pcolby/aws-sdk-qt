// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesmstemplateresponse.h"
#include "updatesmstemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateSmsTemplateResponse
 * \brief The UpdateSmsTemplateResponse class provides an interace for Pinpoint UpdateSmsTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateSmsTemplate
 */

/*!
 * Constructs a UpdateSmsTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSmsTemplateResponse::UpdateSmsTemplateResponse(
        const UpdateSmsTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateSmsTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateSmsTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSmsTemplateRequest * UpdateSmsTemplateResponse::request() const
{
    Q_D(const UpdateSmsTemplateResponse);
    return static_cast<const UpdateSmsTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateSmsTemplate \a response.
 */
void UpdateSmsTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSmsTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateSmsTemplateResponsePrivate
 * \brief The UpdateSmsTemplateResponsePrivate class provides private implementation for UpdateSmsTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateSmsTemplateResponsePrivate object with public implementation \a q.
 */
UpdateSmsTemplateResponsePrivate::UpdateSmsTemplateResponsePrivate(
    UpdateSmsTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateSmsTemplate response element from \a xml.
 */
void UpdateSmsTemplateResponsePrivate::parseUpdateSmsTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSmsTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
