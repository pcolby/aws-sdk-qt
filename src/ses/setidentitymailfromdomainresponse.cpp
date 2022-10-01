// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setidentitymailfromdomainresponse.h"
#include "setidentitymailfromdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SetIdentityMailFromDomainResponse
 * \brief The SetIdentityMailFromDomainResponse class provides an interace for Ses SetIdentityMailFromDomain responses.
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
 * \sa SesClient::setIdentityMailFromDomain
 */

/*!
 * Constructs a SetIdentityMailFromDomainResponse object for \a reply to \a request, with parent \a parent.
 */
SetIdentityMailFromDomainResponse::SetIdentityMailFromDomainResponse(
        const SetIdentityMailFromDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SetIdentityMailFromDomainResponsePrivate(this), parent)
{
    setRequest(new SetIdentityMailFromDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetIdentityMailFromDomainRequest * SetIdentityMailFromDomainResponse::request() const
{
    Q_D(const SetIdentityMailFromDomainResponse);
    return static_cast<const SetIdentityMailFromDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses SetIdentityMailFromDomain \a response.
 */
void SetIdentityMailFromDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetIdentityMailFromDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::SetIdentityMailFromDomainResponsePrivate
 * \brief The SetIdentityMailFromDomainResponsePrivate class provides private implementation for SetIdentityMailFromDomainResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SetIdentityMailFromDomainResponsePrivate object with public implementation \a q.
 */
SetIdentityMailFromDomainResponsePrivate::SetIdentityMailFromDomainResponsePrivate(
    SetIdentityMailFromDomainResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses SetIdentityMailFromDomain response element from \a xml.
 */
void SetIdentityMailFromDomainResponsePrivate::parseSetIdentityMailFromDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIdentityMailFromDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
