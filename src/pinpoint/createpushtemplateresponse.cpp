// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpushtemplateresponse.h"
#include "createpushtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreatePushTemplateResponse
 * \brief The CreatePushTemplateResponse class provides an interace for Pinpoint CreatePushTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createPushTemplate
 */

/*!
 * Constructs a CreatePushTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePushTemplateResponse::CreatePushTemplateResponse(
        const CreatePushTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreatePushTemplateResponsePrivate(this), parent)
{
    setRequest(new CreatePushTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePushTemplateRequest * CreatePushTemplateResponse::request() const
{
    Q_D(const CreatePushTemplateResponse);
    return static_cast<const CreatePushTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreatePushTemplate \a response.
 */
void CreatePushTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePushTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreatePushTemplateResponsePrivate
 * \brief The CreatePushTemplateResponsePrivate class provides private implementation for CreatePushTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreatePushTemplateResponsePrivate object with public implementation \a q.
 */
CreatePushTemplateResponsePrivate::CreatePushTemplateResponsePrivate(
    CreatePushTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreatePushTemplate response element from \a xml.
 */
void CreatePushTemplateResponsePrivate::parseCreatePushTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePushTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
