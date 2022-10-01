// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createemailtemplateresponse.h"
#include "createemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateEmailTemplateResponse
 * \brief The CreateEmailTemplateResponse class provides an interace for Pinpoint CreateEmailTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createEmailTemplate
 */

/*!
 * Constructs a CreateEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEmailTemplateResponse::CreateEmailTemplateResponse(
        const CreateEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEmailTemplateRequest * CreateEmailTemplateResponse::request() const
{
    Q_D(const CreateEmailTemplateResponse);
    return static_cast<const CreateEmailTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateEmailTemplate \a response.
 */
void CreateEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateEmailTemplateResponsePrivate
 * \brief The CreateEmailTemplateResponsePrivate class provides private implementation for CreateEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateEmailTemplateResponsePrivate object with public implementation \a q.
 */
CreateEmailTemplateResponsePrivate::CreateEmailTemplateResponsePrivate(
    CreateEmailTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateEmailTemplate response element from \a xml.
 */
void CreateEmailTemplateResponsePrivate::parseCreateEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
