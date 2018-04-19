/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putcontainerpolicyresponse.h"
#include "putcontainerpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::PutContainerPolicyResponse
 * \brief The PutContainerPolicyResponse class provides an interace for MediaStore PutContainerPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::putContainerPolicy
 */

/*!
 * Constructs a PutContainerPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutContainerPolicyResponse::PutContainerPolicyResponse(
        const PutContainerPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new PutContainerPolicyResponsePrivate(this), parent)
{
    setRequest(new PutContainerPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutContainerPolicyRequest * PutContainerPolicyResponse::request() const
{
    Q_D(const PutContainerPolicyResponse);
    return static_cast<const PutContainerPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore PutContainerPolicy \a response.
 */
void PutContainerPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutContainerPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::PutContainerPolicyResponsePrivate
 * \brief The PutContainerPolicyResponsePrivate class provides private implementation for PutContainerPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a PutContainerPolicyResponsePrivate object with public implementation \a q.
 */
PutContainerPolicyResponsePrivate::PutContainerPolicyResponsePrivate(
    PutContainerPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore PutContainerPolicy response element from \a xml.
 */
void PutContainerPolicyResponsePrivate::parsePutContainerPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutContainerPolicyResponse"));
    /// @todo
}

} // namespace MediaStore
} // namespace QtAws
