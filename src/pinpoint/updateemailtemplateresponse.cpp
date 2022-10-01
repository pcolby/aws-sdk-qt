// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateemailtemplateresponse.h"
#include "updateemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEmailTemplateResponse
 * \brief The UpdateEmailTemplateResponse class provides an interace for Pinpoint UpdateEmailTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateEmailTemplate
 */

/*!
 * Constructs a UpdateEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEmailTemplateResponse::UpdateEmailTemplateResponse(
        const UpdateEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEmailTemplateRequest * UpdateEmailTemplateResponse::request() const
{
    Q_D(const UpdateEmailTemplateResponse);
    return static_cast<const UpdateEmailTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateEmailTemplate \a response.
 */
void UpdateEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateEmailTemplateResponsePrivate
 * \brief The UpdateEmailTemplateResponsePrivate class provides private implementation for UpdateEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEmailTemplateResponsePrivate object with public implementation \a q.
 */
UpdateEmailTemplateResponsePrivate::UpdateEmailTemplateResponsePrivate(
    UpdateEmailTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateEmailTemplate response element from \a xml.
 */
void UpdateEmailTemplateResponsePrivate::parseUpdateEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
