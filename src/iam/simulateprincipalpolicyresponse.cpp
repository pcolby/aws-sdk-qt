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

#include "simulateprincipalpolicyresponse.h"
#include "simulateprincipalpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::SimulatePrincipalPolicyResponse
 * \brief The SimulatePrincipalPolicyResponse class provides an interace for Iam SimulatePrincipalPolicy responses.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::simulatePrincipalPolicy
 */

/*!
 * Constructs a SimulatePrincipalPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
SimulatePrincipalPolicyResponse::SimulatePrincipalPolicyResponse(
        const SimulatePrincipalPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new SimulatePrincipalPolicyResponsePrivate(this), parent)
{
    setRequest(new SimulatePrincipalPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SimulatePrincipalPolicyRequest * SimulatePrincipalPolicyResponse::request() const
{
    Q_D(const SimulatePrincipalPolicyResponse);
    return static_cast<const SimulatePrincipalPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam SimulatePrincipalPolicy \a response.
 */
void SimulatePrincipalPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SimulatePrincipalPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::SimulatePrincipalPolicyResponsePrivate
 * \brief The SimulatePrincipalPolicyResponsePrivate class provides private implementation for SimulatePrincipalPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a SimulatePrincipalPolicyResponsePrivate object with public implementation \a q.
 */
SimulatePrincipalPolicyResponsePrivate::SimulatePrincipalPolicyResponsePrivate(
    SimulatePrincipalPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam SimulatePrincipalPolicy response element from \a xml.
 */
void SimulatePrincipalPolicyResponsePrivate::parseSimulatePrincipalPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SimulatePrincipalPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
