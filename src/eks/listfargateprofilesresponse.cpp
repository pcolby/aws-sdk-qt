// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfargateprofilesresponse.h"
#include "listfargateprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::ListFargateProfilesResponse
 * \brief The ListFargateProfilesResponse class provides an interace for Eks ListFargateProfiles responses.
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
 * \sa EksClient::listFargateProfiles
 */

/*!
 * Constructs a ListFargateProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
ListFargateProfilesResponse::ListFargateProfilesResponse(
        const ListFargateProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new ListFargateProfilesResponsePrivate(this), parent)
{
    setRequest(new ListFargateProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFargateProfilesRequest * ListFargateProfilesResponse::request() const
{
    Q_D(const ListFargateProfilesResponse);
    return static_cast<const ListFargateProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks ListFargateProfiles \a response.
 */
void ListFargateProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFargateProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::ListFargateProfilesResponsePrivate
 * \brief The ListFargateProfilesResponsePrivate class provides private implementation for ListFargateProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a ListFargateProfilesResponsePrivate object with public implementation \a q.
 */
ListFargateProfilesResponsePrivate::ListFargateProfilesResponsePrivate(
    ListFargateProfilesResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks ListFargateProfiles response element from \a xml.
 */
void ListFargateProfilesResponsePrivate::parseListFargateProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFargateProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
