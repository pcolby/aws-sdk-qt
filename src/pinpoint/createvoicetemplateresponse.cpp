// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvoicetemplateresponse.h"
#include "createvoicetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateVoiceTemplateResponse
 * \brief The CreateVoiceTemplateResponse class provides an interace for Pinpoint CreateVoiceTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createVoiceTemplate
 */

/*!
 * Constructs a CreateVoiceTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVoiceTemplateResponse::CreateVoiceTemplateResponse(
        const CreateVoiceTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateVoiceTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateVoiceTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVoiceTemplateRequest * CreateVoiceTemplateResponse::request() const
{
    Q_D(const CreateVoiceTemplateResponse);
    return static_cast<const CreateVoiceTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateVoiceTemplate \a response.
 */
void CreateVoiceTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVoiceTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateVoiceTemplateResponsePrivate
 * \brief The CreateVoiceTemplateResponsePrivate class provides private implementation for CreateVoiceTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateVoiceTemplateResponsePrivate object with public implementation \a q.
 */
CreateVoiceTemplateResponsePrivate::CreateVoiceTemplateResponsePrivate(
    CreateVoiceTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateVoiceTemplate response element from \a xml.
 */
void CreateVoiceTemplateResponsePrivate::parseCreateVoiceTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVoiceTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
