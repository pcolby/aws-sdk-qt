// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaddonresponse.h"
#include "createaddonresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::CreateAddonResponse
 * \brief The CreateAddonResponse class provides an interace for Eks CreateAddon responses.
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
 * \sa EksClient::createAddon
 */

/*!
 * Constructs a CreateAddonResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAddonResponse::CreateAddonResponse(
        const CreateAddonRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new CreateAddonResponsePrivate(this), parent)
{
    setRequest(new CreateAddonRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAddonRequest * CreateAddonResponse::request() const
{
    Q_D(const CreateAddonResponse);
    return static_cast<const CreateAddonRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks CreateAddon \a response.
 */
void CreateAddonResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAddonResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::CreateAddonResponsePrivate
 * \brief The CreateAddonResponsePrivate class provides private implementation for CreateAddonResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a CreateAddonResponsePrivate object with public implementation \a q.
 */
CreateAddonResponsePrivate::CreateAddonResponsePrivate(
    CreateAddonResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks CreateAddon response element from \a xml.
 */
void CreateAddonResponsePrivate::parseCreateAddonResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAddonResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
