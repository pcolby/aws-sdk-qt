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

#include "putcorspolicyresponse.h"
#include "putcorspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::PutCorsPolicyResponse
 * \brief The PutCorsPolicyResponse class provides an interace for MediaStore PutCorsPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::putCorsPolicy
 */

/*!
 * Constructs a PutCorsPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutCorsPolicyResponse::PutCorsPolicyResponse(
        const PutCorsPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new PutCorsPolicyResponsePrivate(this), parent)
{
    setRequest(new PutCorsPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutCorsPolicyRequest * PutCorsPolicyResponse::request() const
{
    return static_cast<const PutCorsPolicyRequest *>(MediaStoreResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaStore PutCorsPolicy \a response.
 */
void PutCorsPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutCorsPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::PutCorsPolicyResponsePrivate
 * \brief The PutCorsPolicyResponsePrivate class provides private implementation for PutCorsPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a PutCorsPolicyResponsePrivate object with public implementation \a q.
 */
PutCorsPolicyResponsePrivate::PutCorsPolicyResponsePrivate(
    PutCorsPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore PutCorsPolicy response element from \a xml.
 */
void PutCorsPolicyResponsePrivate::parsePutCorsPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutCorsPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
