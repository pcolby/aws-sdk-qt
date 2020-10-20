/*
    Copyright 2013-2020 Paul Colby

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

#include "getlifecyclepoliciesresponse.h"
#include "getlifecyclepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DLM {

/*!
 * \class QtAws::DLM::GetLifecyclePoliciesResponse
 * \brief The GetLifecyclePoliciesResponse class provides an interace for DLM GetLifecyclePolicies responses.
 *
 * \inmodule QtAwsDLM
 *
 *  <fullname>Amazon Data Lifecycle Manager</fullname>
 * 
 *  With Amazon Data Lifecycle Manager, you can manage the lifecycle of your AWS resources. You create lifecycle policies,
 *  which are used to automate operations on the specified
 * 
 *  resources>
 * 
 *  Amazon DLM supports Amazon EBS volumes and snapshots. For information about using Amazon DLM with Amazon EBS, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshot-lifecycle.html">Automating the Amazon EBS Snapshot
 *  Lifecycle</a> in the <i>Amazon EC2 User
 *
 * \sa DlmClient::getLifecyclePolicies
 */

/*!
 * Constructs a GetLifecyclePoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
GetLifecyclePoliciesResponse::GetLifecyclePoliciesResponse(
        const GetLifecyclePoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DlmResponse(new GetLifecyclePoliciesResponsePrivate(this), parent)
{
    setRequest(new GetLifecyclePoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLifecyclePoliciesRequest * GetLifecyclePoliciesResponse::request() const
{
    Q_D(const GetLifecyclePoliciesResponse);
    return static_cast<const GetLifecyclePoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DLM GetLifecyclePolicies \a response.
 */
void GetLifecyclePoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLifecyclePoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DLM::GetLifecyclePoliciesResponsePrivate
 * \brief The GetLifecyclePoliciesResponsePrivate class provides private implementation for GetLifecyclePoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsDLM
 */

/*!
 * Constructs a GetLifecyclePoliciesResponsePrivate object with public implementation \a q.
 */
GetLifecyclePoliciesResponsePrivate::GetLifecyclePoliciesResponsePrivate(
    GetLifecyclePoliciesResponse * const q) : DlmResponsePrivate(q)
{

}

/*!
 * Parses a DLM GetLifecyclePolicies response element from \a xml.
 */
void GetLifecyclePoliciesResponsePrivate::parseGetLifecyclePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLifecyclePoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DLM
} // namespace QtAws
