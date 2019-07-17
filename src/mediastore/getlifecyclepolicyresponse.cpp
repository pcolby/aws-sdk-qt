/*
    Copyright 2013-2019 Paul Colby

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

#include "getlifecyclepolicyresponse.h"
#include "getlifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetLifecyclePolicyResponse
 * \brief The GetLifecyclePolicyResponse class provides an interace for MediaStore GetLifecyclePolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getLifecyclePolicy
 */

/*!
 * Constructs a GetLifecyclePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetLifecyclePolicyResponse::GetLifecyclePolicyResponse(
        const GetLifecyclePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new GetLifecyclePolicyResponsePrivate(this), parent)
{
    setRequest(new GetLifecyclePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLifecyclePolicyRequest * GetLifecyclePolicyResponse::request() const
{
    Q_D(const GetLifecyclePolicyResponse);
    return static_cast<const GetLifecyclePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore GetLifecyclePolicy \a response.
 */
void GetLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLifecyclePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::GetLifecyclePolicyResponsePrivate
 * \brief The GetLifecyclePolicyResponsePrivate class provides private implementation for GetLifecyclePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetLifecyclePolicyResponsePrivate object with public implementation \a q.
 */
GetLifecyclePolicyResponsePrivate::GetLifecyclePolicyResponsePrivate(
    GetLifecyclePolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore GetLifecyclePolicy response element from \a xml.
 */
void GetLifecyclePolicyResponsePrivate::parseGetLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLifecyclePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
