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

#include "getcorspolicyresponse.h"
#include "getcorspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetCorsPolicyResponse
 * \brief The GetCorsPolicyResponse class provides an interace for MediaStore GetCorsPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getCorsPolicy
 */

/*!
 * Constructs a GetCorsPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetCorsPolicyResponse::GetCorsPolicyResponse(
        const GetCorsPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new GetCorsPolicyResponsePrivate(this), parent)
{
    setRequest(new GetCorsPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCorsPolicyRequest * GetCorsPolicyResponse::request() const
{
    Q_D(const GetCorsPolicyResponse);
    return static_cast<const GetCorsPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore GetCorsPolicy \a response.
 */
void GetCorsPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCorsPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::GetCorsPolicyResponsePrivate
 * \brief The GetCorsPolicyResponsePrivate class provides private implementation for GetCorsPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetCorsPolicyResponsePrivate object with public implementation \a q.
 */
GetCorsPolicyResponsePrivate::GetCorsPolicyResponsePrivate(
    GetCorsPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore GetCorsPolicy response element from \a xml.
 */
void GetCorsPolicyResponsePrivate::parseGetCorsPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCorsPolicyResponse"));
    /// @todo
}

} // namespace MediaStore
} // namespace QtAws
