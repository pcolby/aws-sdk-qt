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

#include "disassociateresourcesharepermissionresponse.h"
#include "disassociateresourcesharepermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::DisassociateResourceSharePermissionResponse
 * \brief The DisassociateResourceSharePermissionResponse class provides an interace for Ram DisassociateResourceSharePermission responses.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 *
 * \sa RamClient::disassociateResourceSharePermission
 */

/*!
 * Constructs a DisassociateResourceSharePermissionResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateResourceSharePermissionResponse::DisassociateResourceSharePermissionResponse(
        const DisassociateResourceSharePermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new DisassociateResourceSharePermissionResponsePrivate(this), parent)
{
    setRequest(new DisassociateResourceSharePermissionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateResourceSharePermissionRequest * DisassociateResourceSharePermissionResponse::request() const
{
    Q_D(const DisassociateResourceSharePermissionResponse);
    return static_cast<const DisassociateResourceSharePermissionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram DisassociateResourceSharePermission \a response.
 */
void DisassociateResourceSharePermissionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateResourceSharePermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::DisassociateResourceSharePermissionResponsePrivate
 * \brief The DisassociateResourceSharePermissionResponsePrivate class provides private implementation for DisassociateResourceSharePermissionResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a DisassociateResourceSharePermissionResponsePrivate object with public implementation \a q.
 */
DisassociateResourceSharePermissionResponsePrivate::DisassociateResourceSharePermissionResponsePrivate(
    DisassociateResourceSharePermissionResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram DisassociateResourceSharePermission response element from \a xml.
 */
void DisassociateResourceSharePermissionResponsePrivate::parseDisassociateResourceSharePermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateResourceSharePermissionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
