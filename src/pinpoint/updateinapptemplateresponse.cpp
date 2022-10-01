// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinapptemplateresponse.h"
#include "updateinapptemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateInAppTemplateResponse
 * \brief The UpdateInAppTemplateResponse class provides an interace for Pinpoint UpdateInAppTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateInAppTemplate
 */

/*!
 * Constructs a UpdateInAppTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInAppTemplateResponse::UpdateInAppTemplateResponse(
        const UpdateInAppTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateInAppTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateInAppTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInAppTemplateRequest * UpdateInAppTemplateResponse::request() const
{
    Q_D(const UpdateInAppTemplateResponse);
    return static_cast<const UpdateInAppTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateInAppTemplate \a response.
 */
void UpdateInAppTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInAppTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateInAppTemplateResponsePrivate
 * \brief The UpdateInAppTemplateResponsePrivate class provides private implementation for UpdateInAppTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateInAppTemplateResponsePrivate object with public implementation \a q.
 */
UpdateInAppTemplateResponsePrivate::UpdateInAppTemplateResponsePrivate(
    UpdateInAppTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateInAppTemplate response element from \a xml.
 */
void UpdateInAppTemplateResponsePrivate::parseUpdateInAppTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInAppTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
