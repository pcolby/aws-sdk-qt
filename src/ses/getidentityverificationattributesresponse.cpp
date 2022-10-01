// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getidentityverificationattributesresponse.h"
#include "getidentityverificationattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetIdentityVerificationAttributesResponse
 * \brief The GetIdentityVerificationAttributesResponse class provides an interace for Ses GetIdentityVerificationAttributes responses.
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
 * \sa SesClient::getIdentityVerificationAttributes
 */

/*!
 * Constructs a GetIdentityVerificationAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
GetIdentityVerificationAttributesResponse::GetIdentityVerificationAttributesResponse(
        const GetIdentityVerificationAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new GetIdentityVerificationAttributesResponsePrivate(this), parent)
{
    setRequest(new GetIdentityVerificationAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIdentityVerificationAttributesRequest * GetIdentityVerificationAttributesResponse::request() const
{
    Q_D(const GetIdentityVerificationAttributesResponse);
    return static_cast<const GetIdentityVerificationAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses GetIdentityVerificationAttributes \a response.
 */
void GetIdentityVerificationAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIdentityVerificationAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::GetIdentityVerificationAttributesResponsePrivate
 * \brief The GetIdentityVerificationAttributesResponsePrivate class provides private implementation for GetIdentityVerificationAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetIdentityVerificationAttributesResponsePrivate object with public implementation \a q.
 */
GetIdentityVerificationAttributesResponsePrivate::GetIdentityVerificationAttributesResponsePrivate(
    GetIdentityVerificationAttributesResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses GetIdentityVerificationAttributes response element from \a xml.
 */
void GetIdentityVerificationAttributesResponsePrivate::parseGetIdentityVerificationAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityVerificationAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
