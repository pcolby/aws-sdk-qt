/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putidentitypolicyresponse.h"
#include "putidentitypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::PutIdentityPolicyResponse
 * \brief The PutIdentityPolicyResponse class provides an interace for Ses PutIdentityPolicy responses.
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
 * \sa SesClient::putIdentityPolicy
 */

/*!
 * Constructs a PutIdentityPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutIdentityPolicyResponse::PutIdentityPolicyResponse(
        const PutIdentityPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new PutIdentityPolicyResponsePrivate(this), parent)
{
    setRequest(new PutIdentityPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutIdentityPolicyRequest * PutIdentityPolicyResponse::request() const
{
    Q_D(const PutIdentityPolicyResponse);
    return static_cast<const PutIdentityPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses PutIdentityPolicy \a response.
 */
void PutIdentityPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutIdentityPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::PutIdentityPolicyResponsePrivate
 * \brief The PutIdentityPolicyResponsePrivate class provides private implementation for PutIdentityPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a PutIdentityPolicyResponsePrivate object with public implementation \a q.
 */
PutIdentityPolicyResponsePrivate::PutIdentityPolicyResponsePrivate(
    PutIdentityPolicyResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses PutIdentityPolicy response element from \a xml.
 */
void PutIdentityPolicyResponsePrivate::parsePutIdentityPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutIdentityPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
