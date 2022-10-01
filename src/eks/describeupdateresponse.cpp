// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeupdateresponse.h"
#include "describeupdateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DescribeUpdateResponse
 * \brief The DescribeUpdateResponse class provides an interace for Eks DescribeUpdate responses.
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
 * \sa EksClient::describeUpdate
 */

/*!
 * Constructs a DescribeUpdateResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUpdateResponse::DescribeUpdateResponse(
        const DescribeUpdateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new DescribeUpdateResponsePrivate(this), parent)
{
    setRequest(new DescribeUpdateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUpdateRequest * DescribeUpdateResponse::request() const
{
    Q_D(const DescribeUpdateResponse);
    return static_cast<const DescribeUpdateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks DescribeUpdate \a response.
 */
void DescribeUpdateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUpdateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::DescribeUpdateResponsePrivate
 * \brief The DescribeUpdateResponsePrivate class provides private implementation for DescribeUpdateResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DescribeUpdateResponsePrivate object with public implementation \a q.
 */
DescribeUpdateResponsePrivate::DescribeUpdateResponsePrivate(
    DescribeUpdateResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks DescribeUpdate response element from \a xml.
 */
void DescribeUpdateResponsePrivate::parseDescribeUpdateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUpdateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
