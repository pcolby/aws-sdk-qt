// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnodegroupresponse.h"
#include "createnodegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::CreateNodegroupResponse
 * \brief The CreateNodegroupResponse class provides an interace for Eks CreateNodegroup responses.
 *
 * \inmodule QtAwsEks
 *
 *  Amazon Elastic Kubernetes Service (Amazon EKS) is a managed service that makes it easy for you to run Kubernetes on
 *  Amazon Web Services without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an
 *  open-source system for automating the deployment, scaling, and management of containerized applications.
 * 
 *  </p
 * 
 *  Amazon EKS runs up-to-date versions of the open-source Kubernetes software, so you can use all the existing plugins and
 *  tooling from the Kubernetes community. Applications running on Amazon EKS are fully compatible with applications running
 *  on any standard Kubernetes environment, whether running in on-premises data centers or public clouds. This means that
 *  you can easily migrate any standard Kubernetes application to Amazon EKS without any code modification
 *
 * \sa EksClient::createNodegroup
 */

/*!
 * Constructs a CreateNodegroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNodegroupResponse::CreateNodegroupResponse(
        const CreateNodegroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new CreateNodegroupResponsePrivate(this), parent)
{
    setRequest(new CreateNodegroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNodegroupRequest * CreateNodegroupResponse::request() const
{
    Q_D(const CreateNodegroupResponse);
    return static_cast<const CreateNodegroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks CreateNodegroup \a response.
 */
void CreateNodegroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNodegroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::CreateNodegroupResponsePrivate
 * \brief The CreateNodegroupResponsePrivate class provides private implementation for CreateNodegroupResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a CreateNodegroupResponsePrivate object with public implementation \a q.
 */
CreateNodegroupResponsePrivate::CreateNodegroupResponsePrivate(
    CreateNodegroupResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks CreateNodegroup response element from \a xml.
 */
void CreateNodegroupResponsePrivate::parseCreateNodegroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNodegroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
