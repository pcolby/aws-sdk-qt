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

#include "listaddonsresponse.h"
#include "listaddonsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::ListAddonsResponse
 * \brief The ListAddonsResponse class provides an interace for Eks ListAddons responses.
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
 * \sa EksClient::listAddons
 */

/*!
 * Constructs a ListAddonsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAddonsResponse::ListAddonsResponse(
        const ListAddonsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new ListAddonsResponsePrivate(this), parent)
{
    setRequest(new ListAddonsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAddonsRequest * ListAddonsResponse::request() const
{
    Q_D(const ListAddonsResponse);
    return static_cast<const ListAddonsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks ListAddons \a response.
 */
void ListAddonsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAddonsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::ListAddonsResponsePrivate
 * \brief The ListAddonsResponsePrivate class provides private implementation for ListAddonsResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a ListAddonsResponsePrivate object with public implementation \a q.
 */
ListAddonsResponsePrivate::ListAddonsResponsePrivate(
    ListAddonsResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks ListAddons response element from \a xml.
 */
void ListAddonsResponsePrivate::parseListAddonsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAddonsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
