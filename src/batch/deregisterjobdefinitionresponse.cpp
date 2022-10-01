// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisterjobdefinitionresponse.h"
#include "deregisterjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::DeregisterJobDefinitionResponse
 * \brief The DeregisterJobDefinitionResponse class provides an interace for Batch DeregisterJobDefinition responses.
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
 * \sa BatchClient::deregisterJobDefinition
 */

/*!
 * Constructs a DeregisterJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterJobDefinitionResponse::DeregisterJobDefinitionResponse(
        const DeregisterJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new DeregisterJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeregisterJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterJobDefinitionRequest * DeregisterJobDefinitionResponse::request() const
{
    Q_D(const DeregisterJobDefinitionResponse);
    return static_cast<const DeregisterJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Batch DeregisterJobDefinition \a response.
 */
void DeregisterJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Batch::DeregisterJobDefinitionResponsePrivate
 * \brief The DeregisterJobDefinitionResponsePrivate class provides private implementation for DeregisterJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a DeregisterJobDefinitionResponsePrivate object with public implementation \a q.
 */
DeregisterJobDefinitionResponsePrivate::DeregisterJobDefinitionResponsePrivate(
    DeregisterJobDefinitionResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * Parses a Batch DeregisterJobDefinition response element from \a xml.
 */
void DeregisterJobDefinitionResponsePrivate::parseDeregisterJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Batch
} // namespace QtAws
