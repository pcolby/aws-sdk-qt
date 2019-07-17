/*
    Copyright 2013-2019 Paul Colby

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

#include "getlifecyclepolicyresponse.h"
#include "getlifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DLM {

/*!
 * \class QtAws::DLM::GetLifecyclePolicyResponse
 * \brief The GetLifecyclePolicyResponse class provides an interace for DLM GetLifecyclePolicy responses.
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
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshot-lifecycle.html">Automating the Amazon EBS Snapshot
 *  Lifecycle</a> in the <i>Amazon EC2 User
 *
 * \sa DlmClient::getLifecyclePolicy
 */

/*!
 * Constructs a GetLifecyclePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetLifecyclePolicyResponse::GetLifecyclePolicyResponse(
        const GetLifecyclePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DlmResponse(new GetLifecyclePolicyResponsePrivate(this), parent)
{
    setRequest(new GetLifecyclePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLifecyclePolicyRequest * GetLifecyclePolicyResponse::request() const
{
    Q_D(const GetLifecyclePolicyResponse);
    return static_cast<const GetLifecyclePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DLM GetLifecyclePolicy \a response.
 */
void GetLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLifecyclePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DLM::GetLifecyclePolicyResponsePrivate
 * \brief The GetLifecyclePolicyResponsePrivate class provides private implementation for GetLifecyclePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsDLM
 */

/*!
 * Constructs a GetLifecyclePolicyResponsePrivate object with public implementation \a q.
 */
GetLifecyclePolicyResponsePrivate::GetLifecyclePolicyResponsePrivate(
    GetLifecyclePolicyResponse * const q) : DlmResponsePrivate(q)
{

}

/*!
 * Parses a DLM GetLifecyclePolicy response element from \a xml.
 */
void GetLifecyclePolicyResponsePrivate::parseGetLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLifecyclePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DLM
} // namespace QtAws
