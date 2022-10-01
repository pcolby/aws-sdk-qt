// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlifecyclepolicyresponse.h"
#include "createlifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dlm {

/*!
 * \class QtAws::Dlm::CreateLifecyclePolicyResponse
 * \brief The CreateLifecyclePolicyResponse class provides an interace for Dlm CreateLifecyclePolicy responses.
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
 * \sa DlmClient::createLifecyclePolicy
 */

/*!
 * Constructs a CreateLifecyclePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLifecyclePolicyResponse::CreateLifecyclePolicyResponse(
        const CreateLifecyclePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DlmResponse(new CreateLifecyclePolicyResponsePrivate(this), parent)
{
    setRequest(new CreateLifecyclePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLifecyclePolicyRequest * CreateLifecyclePolicyResponse::request() const
{
    Q_D(const CreateLifecyclePolicyResponse);
    return static_cast<const CreateLifecyclePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dlm CreateLifecyclePolicy \a response.
 */
void CreateLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLifecyclePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dlm::CreateLifecyclePolicyResponsePrivate
 * \brief The CreateLifecyclePolicyResponsePrivate class provides private implementation for CreateLifecyclePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsDlm
 */

/*!
 * Constructs a CreateLifecyclePolicyResponsePrivate object with public implementation \a q.
 */
CreateLifecyclePolicyResponsePrivate::CreateLifecyclePolicyResponsePrivate(
    CreateLifecyclePolicyResponse * const q) : DlmResponsePrivate(q)
{

}

/*!
 * Parses a Dlm CreateLifecyclePolicy response element from \a xml.
 */
void CreateLifecyclePolicyResponsePrivate::parseCreateLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLifecyclePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dlm
} // namespace QtAws
