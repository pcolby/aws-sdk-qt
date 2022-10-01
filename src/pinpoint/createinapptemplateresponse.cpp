// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinapptemplateresponse.h"
#include "createinapptemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateInAppTemplateResponse
 * \brief The CreateInAppTemplateResponse class provides an interace for Pinpoint CreateInAppTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createInAppTemplate
 */

/*!
 * Constructs a CreateInAppTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInAppTemplateResponse::CreateInAppTemplateResponse(
        const CreateInAppTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateInAppTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateInAppTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInAppTemplateRequest * CreateInAppTemplateResponse::request() const
{
    Q_D(const CreateInAppTemplateResponse);
    return static_cast<const CreateInAppTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateInAppTemplate \a response.
 */
void CreateInAppTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInAppTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateInAppTemplateResponsePrivate
 * \brief The CreateInAppTemplateResponsePrivate class provides private implementation for CreateInAppTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateInAppTemplateResponsePrivate object with public implementation \a q.
 */
CreateInAppTemplateResponsePrivate::CreateInAppTemplateResponsePrivate(
    CreateInAppTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateInAppTemplate response element from \a xml.
 */
void CreateInAppTemplateResponsePrivate::parseCreateInAppTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInAppTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
