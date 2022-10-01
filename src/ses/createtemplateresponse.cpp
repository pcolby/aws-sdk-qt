// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtemplateresponse.h"
#include "createtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CreateTemplateResponse
 * \brief The CreateTemplateResponse class provides an interace for Ses CreateTemplate responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::createTemplate
 */

/*!
 * Constructs a CreateTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTemplateResponse::CreateTemplateResponse(
        const CreateTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new CreateTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTemplateRequest * CreateTemplateResponse::request() const
{
    Q_D(const CreateTemplateResponse);
    return static_cast<const CreateTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses CreateTemplate \a response.
 */
void CreateTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::CreateTemplateResponsePrivate
 * \brief The CreateTemplateResponsePrivate class provides private implementation for CreateTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CreateTemplateResponsePrivate object with public implementation \a q.
 */
CreateTemplateResponsePrivate::CreateTemplateResponsePrivate(
    CreateTemplateResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses CreateTemplate response element from \a xml.
 */
void CreateTemplateResponsePrivate::parseCreateTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
