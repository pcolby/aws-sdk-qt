// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcomputeenvironmentresponse.h"
#include "createcomputeenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::CreateComputeEnvironmentResponse
 * \brief The CreateComputeEnvironmentResponse class provides an interace for Batch CreateComputeEnvironment responses.
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
 * \sa BatchClient::createComputeEnvironment
 */

/*!
 * Constructs a CreateComputeEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateComputeEnvironmentResponse::CreateComputeEnvironmentResponse(
        const CreateComputeEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new CreateComputeEnvironmentResponsePrivate(this), parent)
{
    setRequest(new CreateComputeEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateComputeEnvironmentRequest * CreateComputeEnvironmentResponse::request() const
{
    Q_D(const CreateComputeEnvironmentResponse);
    return static_cast<const CreateComputeEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Batch CreateComputeEnvironment \a response.
 */
void CreateComputeEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateComputeEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Batch::CreateComputeEnvironmentResponsePrivate
 * \brief The CreateComputeEnvironmentResponsePrivate class provides private implementation for CreateComputeEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a CreateComputeEnvironmentResponsePrivate object with public implementation \a q.
 */
CreateComputeEnvironmentResponsePrivate::CreateComputeEnvironmentResponsePrivate(
    CreateComputeEnvironmentResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * Parses a Batch CreateComputeEnvironment response element from \a xml.
 */
void CreateComputeEnvironmentResponsePrivate::parseCreateComputeEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateComputeEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Batch
} // namespace QtAws
