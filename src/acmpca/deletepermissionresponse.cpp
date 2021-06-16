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

#include "deletepermissionresponse.h"
#include "deletepermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::DeletePermissionResponse
 * \brief The DeletePermissionResponse class provides an interace for ACMPCA DeletePermission responses.
 *
 * \inmodule QtAwsACMPCA
 *
 *  This is the <i>ACM Private CA API Reference</i>. It provides descriptions, syntax, and usage examples for each of the
 *  actions and data types involved in creating and managing private certificate authorities (CA) for your
 * 
 *  organization>
 * 
 *  The documentation for each action shows the Query API request parameters and the XML response. Alternatively, you can
 *  use one of the AWS SDKs to access an API that's tailored to the programming language or platform that you're using. For
 *  more information, see <a href="https://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>> <note>
 * 
 *  Each ACM Private CA API action has a quota that determines the number of times the action can be called per second. For
 *  more information, see <a href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaLimits.html#PcaLimits-api">API
 *  Rate Quotas in ACM Private CA</a> in the ACM Private CA user
 *
 * \sa AcmpcaClient::deletePermission
 */

/*!
 * Constructs a DeletePermissionResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePermissionResponse::DeletePermissionResponse(
        const DeletePermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmpcaResponse(new DeletePermissionResponsePrivate(this), parent)
{
    setRequest(new DeletePermissionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePermissionRequest * DeletePermissionResponse::request() const
{
    Q_D(const DeletePermissionResponse);
    return static_cast<const DeletePermissionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ACMPCA DeletePermission \a response.
 */
void DeletePermissionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACMPCA::DeletePermissionResponsePrivate
 * \brief The DeletePermissionResponsePrivate class provides private implementation for DeletePermissionResponse.
 * \internal
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a DeletePermissionResponsePrivate object with public implementation \a q.
 */
DeletePermissionResponsePrivate::DeletePermissionResponsePrivate(
    DeletePermissionResponse * const q) : AcmpcaResponsePrivate(q)
{

}

/*!
 * Parses a ACMPCA DeletePermission response element from \a xml.
 */
void DeletePermissionResponsePrivate::parseDeletePermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePermissionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ACMPCA
} // namespace QtAws
