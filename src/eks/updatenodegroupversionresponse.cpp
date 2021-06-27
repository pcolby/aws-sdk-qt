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

#include "updatenodegroupversionresponse.h"
#include "updatenodegroupversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::UpdateNodegroupVersionResponse
 * \brief The UpdateNodegroupVersionResponse class provides an interace for EKS UpdateNodegroupVersion responses.
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
 * \sa EksClient::updateNodegroupVersion
 */

/*!
 * Constructs a UpdateNodegroupVersionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNodegroupVersionResponse::UpdateNodegroupVersionResponse(
        const UpdateNodegroupVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new UpdateNodegroupVersionResponsePrivate(this), parent)
{
    setRequest(new UpdateNodegroupVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNodegroupVersionRequest * UpdateNodegroupVersionResponse::request() const
{
    return static_cast<const UpdateNodegroupVersionRequest *>(EksResponse::request());
}

/*!
 * \reimp
 * Parses a successful EKS UpdateNodegroupVersion \a response.
 */
void UpdateNodegroupVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNodegroupVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EKS::UpdateNodegroupVersionResponsePrivate
 * \brief The UpdateNodegroupVersionResponsePrivate class provides private implementation for UpdateNodegroupVersionResponse.
 * \internal
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a UpdateNodegroupVersionResponsePrivate object with public implementation \a q.
 */
UpdateNodegroupVersionResponsePrivate::UpdateNodegroupVersionResponsePrivate(
    UpdateNodegroupVersionResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a EKS UpdateNodegroupVersion response element from \a xml.
 */
void UpdateNodegroupVersionResponsePrivate::parseUpdateNodegroupVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNodegroupVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EKS
} // namespace QtAws
