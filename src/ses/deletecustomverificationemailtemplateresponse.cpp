// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecustomverificationemailtemplateresponse.h"
#include "deletecustomverificationemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteCustomVerificationEmailTemplateResponse
 * \brief The DeleteCustomVerificationEmailTemplateResponse class provides an interace for Ses DeleteCustomVerificationEmailTemplate responses.
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
 * \sa SesClient::deleteCustomVerificationEmailTemplate
 */

/*!
 * Constructs a DeleteCustomVerificationEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCustomVerificationEmailTemplateResponse::DeleteCustomVerificationEmailTemplateResponse(
        const DeleteCustomVerificationEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DeleteCustomVerificationEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteCustomVerificationEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCustomVerificationEmailTemplateRequest * DeleteCustomVerificationEmailTemplateResponse::request() const
{
    Q_D(const DeleteCustomVerificationEmailTemplateResponse);
    return static_cast<const DeleteCustomVerificationEmailTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses DeleteCustomVerificationEmailTemplate \a response.
 */
void DeleteCustomVerificationEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCustomVerificationEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::DeleteCustomVerificationEmailTemplateResponsePrivate
 * \brief The DeleteCustomVerificationEmailTemplateResponsePrivate class provides private implementation for DeleteCustomVerificationEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteCustomVerificationEmailTemplateResponsePrivate object with public implementation \a q.
 */
DeleteCustomVerificationEmailTemplateResponsePrivate::DeleteCustomVerificationEmailTemplateResponsePrivate(
    DeleteCustomVerificationEmailTemplateResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses DeleteCustomVerificationEmailTemplate response element from \a xml.
 */
void DeleteCustomVerificationEmailTemplateResponsePrivate::parseDeleteCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCustomVerificationEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
