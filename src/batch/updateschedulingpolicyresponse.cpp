// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateschedulingpolicyresponse.h"
#include "updateschedulingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::UpdateSchedulingPolicyResponse
 * \brief The UpdateSchedulingPolicyResponse class provides an interace for Batch UpdateSchedulingPolicy responses.
 *
 * \inmodule QtAwsBatch
 *
 *  <fullname>Batch</fullname>
 * 
 *  Using Batch, you can run batch computing workloads on the Amazon Web Services Cloud. Batch computing is a common means
 *  for developers, scientists, and engineers to access large amounts of compute resources. Batch uses the advantages of
 *  this computing workload to remove the undifferentiated heavy lifting of configuring and managing required
 *  infrastructure. At the same time, it also adopts a familiar batch computing software approach. Given these advantages,
 *  Batch can help you to efficiently provision resources in response to jobs submitted, thus effectively helping you to
 *  eliminate capacity constraints, reduce compute costs, and deliver your results more
 * 
 *  quickly>
 * 
 *  As a fully managed service, Batch can run batch computing workloads of any scale. Batch automatically provisions compute
 *  resources and optimizes workload distribution based on the quantity and scale of your specific workloads. With Batch,
 *  there's no need to install or manage batch computing software. This means that you can focus your time and energy on
 *  analyzing results and solving your specific
 *
 * \sa BatchClient::updateSchedulingPolicy
 */

/*!
 * Constructs a UpdateSchedulingPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSchedulingPolicyResponse::UpdateSchedulingPolicyResponse(
        const UpdateSchedulingPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new UpdateSchedulingPolicyResponsePrivate(this), parent)
{
    setRequest(new UpdateSchedulingPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSchedulingPolicyRequest * UpdateSchedulingPolicyResponse::request() const
{
    Q_D(const UpdateSchedulingPolicyResponse);
    return static_cast<const UpdateSchedulingPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Batch UpdateSchedulingPolicy \a response.
 */
void UpdateSchedulingPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSchedulingPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Batch::UpdateSchedulingPolicyResponsePrivate
 * \brief The UpdateSchedulingPolicyResponsePrivate class provides private implementation for UpdateSchedulingPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a UpdateSchedulingPolicyResponsePrivate object with public implementation \a q.
 */
UpdateSchedulingPolicyResponsePrivate::UpdateSchedulingPolicyResponsePrivate(
    UpdateSchedulingPolicyResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * Parses a Batch UpdateSchedulingPolicy response element from \a xml.
 */
void UpdateSchedulingPolicyResponsePrivate::parseUpdateSchedulingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSchedulingPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Batch
} // namespace QtAws
