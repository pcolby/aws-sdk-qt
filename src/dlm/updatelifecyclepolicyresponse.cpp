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

#include "updatelifecyclepolicyresponse.h"
#include "updatelifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DLM {

/*!
 * \class QtAws::DLM::UpdateLifecyclePolicyResponse
 * \brief The UpdateLifecyclePolicyResponse class provides an interace for DLM UpdateLifecyclePolicy responses.
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
 * \sa DlmClient::updateLifecyclePolicy
 */

/*!
 * Constructs a UpdateLifecyclePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLifecyclePolicyResponse::UpdateLifecyclePolicyResponse(
        const UpdateLifecyclePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DlmResponse(new UpdateLifecyclePolicyResponsePrivate(this), parent)
{
    setRequest(new UpdateLifecyclePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLifecyclePolicyRequest * UpdateLifecyclePolicyResponse::request() const
{
    return static_cast<const UpdateLifecyclePolicyRequest *>(DlmResponse::request());
}

/*!
 * \reimp
 * Parses a successful DLM UpdateLifecyclePolicy \a response.
 */
void UpdateLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLifecyclePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DLM::UpdateLifecyclePolicyResponsePrivate
 * \brief The UpdateLifecyclePolicyResponsePrivate class provides private implementation for UpdateLifecyclePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsDLM
 */

/*!
 * Constructs a UpdateLifecyclePolicyResponsePrivate object with public implementation \a q.
 */
UpdateLifecyclePolicyResponsePrivate::UpdateLifecyclePolicyResponsePrivate(
    UpdateLifecyclePolicyResponse * const q) : DlmResponsePrivate(q)
{

}

/*!
 * Parses a DLM UpdateLifecyclePolicy response element from \a xml.
 */
void UpdateLifecyclePolicyResponsePrivate::parseUpdateLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLifecyclePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DLM
} // namespace QtAws
