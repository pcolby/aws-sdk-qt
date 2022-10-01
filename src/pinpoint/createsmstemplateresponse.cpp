// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsmstemplateresponse.h"
#include "createsmstemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateSmsTemplateResponse
 * \brief The CreateSmsTemplateResponse class provides an interace for Pinpoint CreateSmsTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createSmsTemplate
 */

/*!
 * Constructs a CreateSmsTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSmsTemplateResponse::CreateSmsTemplateResponse(
        const CreateSmsTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateSmsTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateSmsTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSmsTemplateRequest * CreateSmsTemplateResponse::request() const
{
    Q_D(const CreateSmsTemplateResponse);
    return static_cast<const CreateSmsTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateSmsTemplate \a response.
 */
void CreateSmsTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSmsTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateSmsTemplateResponsePrivate
 * \brief The CreateSmsTemplateResponsePrivate class provides private implementation for CreateSmsTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateSmsTemplateResponsePrivate object with public implementation \a q.
 */
CreateSmsTemplateResponsePrivate::CreateSmsTemplateResponsePrivate(
    CreateSmsTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateSmsTemplate response element from \a xml.
 */
void CreateSmsTemplateResponsePrivate::parseCreateSmsTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSmsTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
