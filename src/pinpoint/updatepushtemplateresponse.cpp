// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepushtemplateresponse.h"
#include "updatepushtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdatePushTemplateResponse
 * \brief The UpdatePushTemplateResponse class provides an interace for Pinpoint UpdatePushTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updatePushTemplate
 */

/*!
 * Constructs a UpdatePushTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePushTemplateResponse::UpdatePushTemplateResponse(
        const UpdatePushTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdatePushTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdatePushTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePushTemplateRequest * UpdatePushTemplateResponse::request() const
{
    Q_D(const UpdatePushTemplateResponse);
    return static_cast<const UpdatePushTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdatePushTemplate \a response.
 */
void UpdatePushTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePushTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdatePushTemplateResponsePrivate
 * \brief The UpdatePushTemplateResponsePrivate class provides private implementation for UpdatePushTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdatePushTemplateResponsePrivate object with public implementation \a q.
 */
UpdatePushTemplateResponsePrivate::UpdatePushTemplateResponsePrivate(
    UpdatePushTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdatePushTemplate response element from \a xml.
 */
void UpdatePushTemplateResponsePrivate::parseUpdatePushTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePushTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
