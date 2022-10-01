// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevoicetemplateresponse.h"
#include "updatevoicetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateVoiceTemplateResponse
 * \brief The UpdateVoiceTemplateResponse class provides an interace for Pinpoint UpdateVoiceTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateVoiceTemplate
 */

/*!
 * Constructs a UpdateVoiceTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVoiceTemplateResponse::UpdateVoiceTemplateResponse(
        const UpdateVoiceTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateVoiceTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateVoiceTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVoiceTemplateRequest * UpdateVoiceTemplateResponse::request() const
{
    Q_D(const UpdateVoiceTemplateResponse);
    return static_cast<const UpdateVoiceTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateVoiceTemplate \a response.
 */
void UpdateVoiceTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVoiceTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateVoiceTemplateResponsePrivate
 * \brief The UpdateVoiceTemplateResponsePrivate class provides private implementation for UpdateVoiceTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateVoiceTemplateResponsePrivate object with public implementation \a q.
 */
UpdateVoiceTemplateResponsePrivate::UpdateVoiceTemplateResponsePrivate(
    UpdateVoiceTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateVoiceTemplate response element from \a xml.
 */
void UpdateVoiceTemplateResponsePrivate::parseUpdateVoiceTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVoiceTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
