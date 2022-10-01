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

#include "describefargateprofileresponse.h"
#include "describefargateprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DescribeFargateProfileResponse
 * \brief The DescribeFargateProfileResponse class provides an interace for Eks DescribeFargateProfile responses.
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
 * \sa EksClient::describeFargateProfile
 */

/*!
 * Constructs a DescribeFargateProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFargateProfileResponse::DescribeFargateProfileResponse(
        const DescribeFargateProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new DescribeFargateProfileResponsePrivate(this), parent)
{
    setRequest(new DescribeFargateProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFargateProfileRequest * DescribeFargateProfileResponse::request() const
{
    Q_D(const DescribeFargateProfileResponse);
    return static_cast<const DescribeFargateProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks DescribeFargateProfile \a response.
 */
void DescribeFargateProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFargateProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::DescribeFargateProfileResponsePrivate
 * \brief The DescribeFargateProfileResponsePrivate class provides private implementation for DescribeFargateProfileResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DescribeFargateProfileResponsePrivate object with public implementation \a q.
 */
DescribeFargateProfileResponsePrivate::DescribeFargateProfileResponsePrivate(
    DescribeFargateProfileResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks DescribeFargateProfile response element from \a xml.
 */
void DescribeFargateProfileResponsePrivate::parseDescribeFargateProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFargateProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
