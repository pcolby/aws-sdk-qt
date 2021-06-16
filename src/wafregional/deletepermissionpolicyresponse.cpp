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

#include "deletepermissionpolicyresponse.h"
#include "deletepermissionpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::DeletePermissionPolicyResponse
 * \brief The DeletePermissionPolicyResponse class provides an interace for WAFRegional DeletePermissionPolicy responses.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::deletePermissionPolicy
 */

/*!
 * Constructs a DeletePermissionPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePermissionPolicyResponse::DeletePermissionPolicyResponse(
        const DeletePermissionPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new DeletePermissionPolicyResponsePrivate(this), parent)
{
    setRequest(new DeletePermissionPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePermissionPolicyRequest * DeletePermissionPolicyResponse::request() const
{
    Q_D(const DeletePermissionPolicyResponse);
    return static_cast<const DeletePermissionPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAFRegional DeletePermissionPolicy \a response.
 */
void DeletePermissionPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePermissionPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAFRegional::DeletePermissionPolicyResponsePrivate
 * \brief The DeletePermissionPolicyResponsePrivate class provides private implementation for DeletePermissionPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a DeletePermissionPolicyResponsePrivate object with public implementation \a q.
 */
DeletePermissionPolicyResponsePrivate::DeletePermissionPolicyResponsePrivate(
    DeletePermissionPolicyResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WAFRegional DeletePermissionPolicy response element from \a xml.
 */
void DeletePermissionPolicyResponsePrivate::parseDeletePermissionPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePermissionPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WAFRegional
} // namespace QtAws
