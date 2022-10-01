// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelifecyclepolicyresponse.h"
#include "updatelifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dlm {

/*!
 * \class QtAws::Dlm::UpdateLifecyclePolicyResponse
 * \brief The UpdateLifecyclePolicyResponse class provides an interace for Dlm UpdateLifecyclePolicy responses.
 *
 * \inmodule QtAwsDlm
 *
 *  <fullname>Amazon Data Lifecycle Manager</fullname>
 * 
 *  With Amazon Data Lifecycle Manager, you can manage the lifecycle of your Amazon Web Services resources. You create
 *  lifecycle policies, which are used to automate operations on the specified
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
    Q_D(const UpdateLifecyclePolicyResponse);
    return static_cast<const UpdateLifecyclePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dlm UpdateLifecyclePolicy \a response.
 */
void UpdateLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLifecyclePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dlm::UpdateLifecyclePolicyResponsePrivate
 * \brief The UpdateLifecyclePolicyResponsePrivate class provides private implementation for UpdateLifecyclePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsDlm
 */

/*!
 * Constructs a UpdateLifecyclePolicyResponsePrivate object with public implementation \a q.
 */
UpdateLifecyclePolicyResponsePrivate::UpdateLifecyclePolicyResponsePrivate(
    UpdateLifecyclePolicyResponse * const q) : DlmResponsePrivate(q)
{

}

/*!
 * Parses a Dlm UpdateLifecyclePolicy response element from \a xml.
 */
void UpdateLifecyclePolicyResponsePrivate::parseUpdateLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLifecyclePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dlm
} // namespace QtAws
