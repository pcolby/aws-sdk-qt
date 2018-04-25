/*
    Copyright 2013-2018 Paul Colby

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

#include "getcontainerpolicyresponse.h"
#include "getcontainerpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetContainerPolicyResponse
 * \brief The GetContainerPolicyResponse class provides an interace for MediaStore GetContainerPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getContainerPolicy
 */

/*!
 * Constructs a GetContainerPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetContainerPolicyResponse::GetContainerPolicyResponse(
        const GetContainerPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new GetContainerPolicyResponsePrivate(this), parent)
{
    setRequest(new GetContainerPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContainerPolicyRequest * GetContainerPolicyResponse::request() const
{
    Q_D(const GetContainerPolicyResponse);
    return static_cast<const GetContainerPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore GetContainerPolicy \a response.
 */
void GetContainerPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetContainerPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::GetContainerPolicyResponsePrivate
 * \brief The GetContainerPolicyResponsePrivate class provides private implementation for GetContainerPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetContainerPolicyResponsePrivate object with public implementation \a q.
 */
GetContainerPolicyResponsePrivate::GetContainerPolicyResponsePrivate(
    GetContainerPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore GetContainerPolicy response element from \a xml.
 */
void GetContainerPolicyResponsePrivate::parseGetContainerPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContainerPolicyResponse"));
    /// @todo
}

} // namespace MediaStore
} // namespace QtAws
