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

#include "deleteidentitypolicyresponse.h"
#include "deleteidentitypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DeleteIdentityPolicyResponse
 * \brief The DeleteIdentityPolicyResponse class provides an interace for SES DeleteIdentityPolicy responses.
 *
 * \inmodule QtAwsSES
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
 * \sa SesClient::deleteIdentityPolicy
 */

/*!
 * Constructs a DeleteIdentityPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIdentityPolicyResponse::DeleteIdentityPolicyResponse(
        const DeleteIdentityPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DeleteIdentityPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteIdentityPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIdentityPolicyRequest * DeleteIdentityPolicyResponse::request() const
{
    Q_D(const DeleteIdentityPolicyResponse);
    return static_cast<const DeleteIdentityPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES DeleteIdentityPolicy \a response.
 */
void DeleteIdentityPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIdentityPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::DeleteIdentityPolicyResponsePrivate
 * \brief The DeleteIdentityPolicyResponsePrivate class provides private implementation for DeleteIdentityPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a DeleteIdentityPolicyResponsePrivate object with public implementation \a q.
 */
DeleteIdentityPolicyResponsePrivate::DeleteIdentityPolicyResponsePrivate(
    DeleteIdentityPolicyResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a SES DeleteIdentityPolicy response element from \a xml.
 */
void DeleteIdentityPolicyResponsePrivate::parseDeleteIdentityPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIdentityPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SES
} // namespace QtAws
