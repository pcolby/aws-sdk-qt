// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaddonresponse.h"
#include "describeaddonresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DescribeAddonResponse
 * \brief The DescribeAddonResponse class provides an interace for Eks DescribeAddon responses.
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
 * \sa EksClient::describeAddon
 */

/*!
 * Constructs a DescribeAddonResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAddonResponse::DescribeAddonResponse(
        const DescribeAddonRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new DescribeAddonResponsePrivate(this), parent)
{
    setRequest(new DescribeAddonRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAddonRequest * DescribeAddonResponse::request() const
{
    Q_D(const DescribeAddonResponse);
    return static_cast<const DescribeAddonRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks DescribeAddon \a response.
 */
void DescribeAddonResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAddonResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::DescribeAddonResponsePrivate
 * \brief The DescribeAddonResponsePrivate class provides private implementation for DescribeAddonResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DescribeAddonResponsePrivate object with public implementation \a q.
 */
DescribeAddonResponsePrivate::DescribeAddonResponsePrivate(
    DescribeAddonResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks DescribeAddon response element from \a xml.
 */
void DescribeAddonResponsePrivate::parseDescribeAddonResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAddonResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
