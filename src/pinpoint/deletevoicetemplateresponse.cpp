// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevoicetemplateresponse.h"
#include "deletevoicetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteVoiceTemplateResponse
 * \brief The DeleteVoiceTemplateResponse class provides an interace for Pinpoint DeleteVoiceTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteVoiceTemplate
 */

/*!
 * Constructs a DeleteVoiceTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVoiceTemplateResponse::DeleteVoiceTemplateResponse(
        const DeleteVoiceTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteVoiceTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteVoiceTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVoiceTemplateRequest * DeleteVoiceTemplateResponse::request() const
{
    Q_D(const DeleteVoiceTemplateResponse);
    return static_cast<const DeleteVoiceTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteVoiceTemplate \a response.
 */
void DeleteVoiceTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVoiceTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteVoiceTemplateResponsePrivate
 * \brief The DeleteVoiceTemplateResponsePrivate class provides private implementation for DeleteVoiceTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteVoiceTemplateResponsePrivate object with public implementation \a q.
 */
DeleteVoiceTemplateResponsePrivate::DeleteVoiceTemplateResponsePrivate(
    DeleteVoiceTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteVoiceTemplate response element from \a xml.
 */
void DeleteVoiceTemplateResponsePrivate::parseDeleteVoiceTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVoiceTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
