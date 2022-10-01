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

#include "describenodegroupresponse.h"
#include "describenodegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DescribeNodegroupResponse
 * \brief The DescribeNodegroupResponse class provides an interace for Eks DescribeNodegroup responses.
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
 * \sa EksClient::describeNodegroup
 */

/*!
 * Constructs a DescribeNodegroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNodegroupResponse::DescribeNodegroupResponse(
        const DescribeNodegroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new DescribeNodegroupResponsePrivate(this), parent)
{
    setRequest(new DescribeNodegroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNodegroupRequest * DescribeNodegroupResponse::request() const
{
    Q_D(const DescribeNodegroupResponse);
    return static_cast<const DescribeNodegroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks DescribeNodegroup \a response.
 */
void DescribeNodegroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeNodegroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::DescribeNodegroupResponsePrivate
 * \brief The DescribeNodegroupResponsePrivate class provides private implementation for DescribeNodegroupResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DescribeNodegroupResponsePrivate object with public implementation \a q.
 */
DescribeNodegroupResponsePrivate::DescribeNodegroupResponsePrivate(
    DescribeNodegroupResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks DescribeNodegroup response element from \a xml.
 */
void DescribeNodegroupResponsePrivate::parseDescribeNodegroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNodegroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
