// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlifecyclepoliciesresponse.h"
#include "getlifecyclepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dlm {

/*!
 * \class QtAws::Dlm::GetLifecyclePoliciesResponse
 * \brief The GetLifecyclePoliciesResponse class provides an interace for Dlm GetLifecyclePolicies responses.
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
 * Parses a successful Dlm GetLifecyclePolicies \a response.
 */
void GetLifecyclePoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLifecyclePoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dlm::GetLifecyclePoliciesResponsePrivate
 * \brief The GetLifecyclePoliciesResponsePrivate class provides private implementation for GetLifecyclePoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsDlm
 */

/*!
 * Constructs a GetLifecyclePoliciesResponsePrivate object with public implementation \a q.
 */
GetLifecyclePoliciesResponsePrivate::GetLifecyclePoliciesResponsePrivate(
    GetLifecyclePoliciesResponse * const q) : DlmResponsePrivate(q)
{

}

/*!
 * Parses a Dlm GetLifecyclePolicies response element from \a xml.
 */
void GetLifecyclePoliciesResponsePrivate::parseGetLifecyclePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLifecyclePoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dlm
} // namespace QtAws
