/*
    Copyright 2013-2018 Paul Colby

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

#include "getpolicyresponse.h"
#include "getpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::GetPolicyResponse
 * \brief The GetPolicyResponse class provides an interace for FMS GetPolicy responses.
 *
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FmsClient::getPolicy
 */

/*!
 * Constructs a GetPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetPolicyResponse::GetPolicyResponse(
        const GetPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new GetPolicyResponsePrivate(this), parent)
{
    setRequest(new GetPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPolicyRequest * GetPolicyResponse::request() const
{
    Q_D(const GetPolicyResponse);
    return static_cast<const GetPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FMS GetPolicy \a response.
 */
void GetPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FMS::GetPolicyResponsePrivate
 * \brief The GetPolicyResponsePrivate class provides private implementation for GetPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a GetPolicyResponsePrivate object with public implementation \a q.
 */
GetPolicyResponsePrivate::GetPolicyResponsePrivate(
    GetPolicyResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a FMS GetPolicy response element from \a xml.
 */
void GetPolicyResponsePrivate::parseGetPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FMS
} // namespace QtAws
