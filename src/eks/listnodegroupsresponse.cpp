// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnodegroupsresponse.h"
#include "listnodegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::ListNodegroupsResponse
 * \brief The ListNodegroupsResponse class provides an interace for Eks ListNodegroups responses.
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
 * \sa EksClient::listNodegroups
 */

/*!
 * Constructs a ListNodegroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListNodegroupsResponse::ListNodegroupsResponse(
        const ListNodegroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new ListNodegroupsResponsePrivate(this), parent)
{
    setRequest(new ListNodegroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNodegroupsRequest * ListNodegroupsResponse::request() const
{
    Q_D(const ListNodegroupsResponse);
    return static_cast<const ListNodegroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks ListNodegroups \a response.
 */
void ListNodegroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNodegroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::ListNodegroupsResponsePrivate
 * \brief The ListNodegroupsResponsePrivate class provides private implementation for ListNodegroupsResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a ListNodegroupsResponsePrivate object with public implementation \a q.
 */
ListNodegroupsResponsePrivate::ListNodegroupsResponsePrivate(
    ListNodegroupsResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks ListNodegroups response element from \a xml.
 */
void ListNodegroupsResponsePrivate::parseListNodegroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNodegroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
