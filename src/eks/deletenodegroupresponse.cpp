// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenodegroupresponse.h"
#include "deletenodegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DeleteNodegroupResponse
 * \brief The DeleteNodegroupResponse class provides an interace for Eks DeleteNodegroup responses.
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
 * \sa EksClient::deleteNodegroup
 */

/*!
 * Constructs a DeleteNodegroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNodegroupResponse::DeleteNodegroupResponse(
        const DeleteNodegroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new DeleteNodegroupResponsePrivate(this), parent)
{
    setRequest(new DeleteNodegroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNodegroupRequest * DeleteNodegroupResponse::request() const
{
    Q_D(const DeleteNodegroupResponse);
    return static_cast<const DeleteNodegroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks DeleteNodegroup \a response.
 */
void DeleteNodegroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNodegroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::DeleteNodegroupResponsePrivate
 * \brief The DeleteNodegroupResponsePrivate class provides private implementation for DeleteNodegroupResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DeleteNodegroupResponsePrivate object with public implementation \a q.
 */
DeleteNodegroupResponsePrivate::DeleteNodegroupResponsePrivate(
    DeleteNodegroupResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks DeleteNodegroup response element from \a xml.
 */
void DeleteNodegroupResponsePrivate::parseDeleteNodegroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNodegroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
