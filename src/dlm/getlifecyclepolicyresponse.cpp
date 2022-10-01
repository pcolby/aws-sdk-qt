// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlifecyclepolicyresponse.h"
#include "getlifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dlm {

/*!
 * \class QtAws::Dlm::GetLifecyclePolicyResponse
 * \brief The GetLifecyclePolicyResponse class provides an interace for Dlm GetLifecyclePolicy responses.
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
 * Parses a successful Dlm GetLifecyclePolicy \a response.
 */
void GetLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLifecyclePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dlm::GetLifecyclePolicyResponsePrivate
 * \brief The GetLifecyclePolicyResponsePrivate class provides private implementation for GetLifecyclePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsDlm
 */

/*!
 * Constructs a GetLifecyclePolicyResponsePrivate object with public implementation \a q.
 */
GetLifecyclePolicyResponsePrivate::GetLifecyclePolicyResponsePrivate(
    GetLifecyclePolicyResponse * const q) : DlmResponsePrivate(q)
{

}

/*!
 * Parses a Dlm GetLifecyclePolicy response element from \a xml.
 */
void GetLifecyclePolicyResponsePrivate::parseGetLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLifecyclePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dlm
} // namespace QtAws
