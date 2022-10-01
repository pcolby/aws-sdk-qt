// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "verifydomaindkimresponse.h"
#include "verifydomaindkimresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::VerifyDomainDkimResponse
 * \brief The VerifyDomainDkimResponse class provides an interace for Ses VerifyDomainDkim responses.
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
 * \sa SesClient::verifyDomainDkim
 */

/*!
 * Constructs a VerifyDomainDkimResponse object for \a reply to \a request, with parent \a parent.
 */
VerifyDomainDkimResponse::VerifyDomainDkimResponse(
        const VerifyDomainDkimRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new VerifyDomainDkimResponsePrivate(this), parent)
{
    setRequest(new VerifyDomainDkimRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const VerifyDomainDkimRequest * VerifyDomainDkimResponse::request() const
{
    Q_D(const VerifyDomainDkimResponse);
    return static_cast<const VerifyDomainDkimRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses VerifyDomainDkim \a response.
 */
void VerifyDomainDkimResponse::parseSuccess(QIODevice &response)
{
    //Q_D(VerifyDomainDkimResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::VerifyDomainDkimResponsePrivate
 * \brief The VerifyDomainDkimResponsePrivate class provides private implementation for VerifyDomainDkimResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a VerifyDomainDkimResponsePrivate object with public implementation \a q.
 */
VerifyDomainDkimResponsePrivate::VerifyDomainDkimResponsePrivate(
    VerifyDomainDkimResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses VerifyDomainDkim response element from \a xml.
 */
void VerifyDomainDkimResponsePrivate::parseVerifyDomainDkimResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VerifyDomainDkimResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
