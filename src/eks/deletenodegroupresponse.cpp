/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletenodegroupresponse.h"
#include "deletenodegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::DeleteNodegroupResponse
 * \brief The DeleteNodegroupResponse class provides an interace for EKS DeleteNodegroup responses.
 *
 * \inmodule QtAwsEKS
 *
 *  Amazon Elastic Kubernetes Service (Amazon EKS) is a managed service that makes it easy for you to run Kubernetes on AWS
 *  without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an open-source system for
 *  automating the deployment, scaling, and management of containerized applications.
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
 * Parses a successful EKS DeleteNodegroup \a response.
 */
void DeleteNodegroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNodegroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EKS::DeleteNodegroupResponsePrivate
 * \brief The DeleteNodegroupResponsePrivate class provides private implementation for DeleteNodegroupResponse.
 * \internal
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a DeleteNodegroupResponsePrivate object with public implementation \a q.
 */
DeleteNodegroupResponsePrivate::DeleteNodegroupResponsePrivate(
    DeleteNodegroupResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a EKS DeleteNodegroup response element from \a xml.
 */
void DeleteNodegroupResponsePrivate::parseDeleteNodegroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNodegroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EKS
} // namespace QtAws
