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

#include "deletelifecyclepolicyresponse.h"
#include "deletelifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DLM {

/*!
 * \class QtAws::DLM::DeleteLifecyclePolicyResponse
 * \brief The DeleteLifecyclePolicyResponse class provides an interace for DLM DeleteLifecyclePolicy responses.
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
 * \sa DlmClient::deleteLifecyclePolicy
 */

/*!
 * Constructs a DeleteLifecyclePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLifecyclePolicyResponse::DeleteLifecyclePolicyResponse(
        const DeleteLifecyclePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DlmResponse(new DeleteLifecyclePolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteLifecyclePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLifecyclePolicyRequest * DeleteLifecyclePolicyResponse::request() const
{
    Q_D(const DeleteLifecyclePolicyResponse);
    return static_cast<const DeleteLifecyclePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DLM DeleteLifecyclePolicy \a response.
 */
void DeleteLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLifecyclePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DLM::DeleteLifecyclePolicyResponsePrivate
 * \brief The DeleteLifecyclePolicyResponsePrivate class provides private implementation for DeleteLifecyclePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsDLM
 */

/*!
 * Constructs a DeleteLifecyclePolicyResponsePrivate object with public implementation \a q.
 */
DeleteLifecyclePolicyResponsePrivate::DeleteLifecyclePolicyResponsePrivate(
    DeleteLifecyclePolicyResponse * const q) : DlmResponsePrivate(q)
{

}

/*!
 * Parses a DLM DeleteLifecyclePolicy response element from \a xml.
 */
void DeleteLifecyclePolicyResponsePrivate::parseDeleteLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLifecyclePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DLM
} // namespace QtAws
