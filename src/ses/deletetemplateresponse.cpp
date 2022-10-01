// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetemplateresponse.h"
#include "deletetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteTemplateResponse
 * \brief The DeleteTemplateResponse class provides an interace for Ses DeleteTemplate responses.
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
 * \sa SesClient::deleteTemplate
 */

/*!
 * Constructs a DeleteTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTemplateResponse::DeleteTemplateResponse(
        const DeleteTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DeleteTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTemplateRequest * DeleteTemplateResponse::request() const
{
    Q_D(const DeleteTemplateResponse);
    return static_cast<const DeleteTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses DeleteTemplate \a response.
 */
void DeleteTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::DeleteTemplateResponsePrivate
 * \brief The DeleteTemplateResponsePrivate class provides private implementation for DeleteTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteTemplateResponsePrivate object with public implementation \a q.
 */
DeleteTemplateResponsePrivate::DeleteTemplateResponsePrivate(
    DeleteTemplateResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses DeleteTemplate response element from \a xml.
 */
void DeleteTemplateResponsePrivate::parseDeleteTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
