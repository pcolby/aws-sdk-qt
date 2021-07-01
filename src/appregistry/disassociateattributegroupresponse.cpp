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

#include "disassociateattributegroupresponse.h"
#include "disassociateattributegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::DisassociateAttributeGroupResponse
 * \brief The DisassociateAttributeGroupResponse class provides an interace for AppRegistry DisassociateAttributeGroup responses.
 *
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 *
 * \sa AppRegistryClient::disassociateAttributeGroup
 */

/*!
 * Constructs a DisassociateAttributeGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateAttributeGroupResponse::DisassociateAttributeGroupResponse(
        const DisassociateAttributeGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppRegistryResponse(new DisassociateAttributeGroupResponsePrivate(this), parent)
{
    setRequest(new DisassociateAttributeGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateAttributeGroupRequest * DisassociateAttributeGroupResponse::request() const
{
    Q_D(const DisassociateAttributeGroupResponse);
    return static_cast<const DisassociateAttributeGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppRegistry DisassociateAttributeGroup \a response.
 */
void DisassociateAttributeGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateAttributeGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppRegistry::DisassociateAttributeGroupResponsePrivate
 * \brief The DisassociateAttributeGroupResponsePrivate class provides private implementation for DisassociateAttributeGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a DisassociateAttributeGroupResponsePrivate object with public implementation \a q.
 */
DisassociateAttributeGroupResponsePrivate::DisassociateAttributeGroupResponsePrivate(
    DisassociateAttributeGroupResponse * const q) : AppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a AppRegistry DisassociateAttributeGroup response element from \a xml.
 */
void DisassociateAttributeGroupResponsePrivate::parseDisassociateAttributeGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateAttributeGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppRegistry
} // namespace QtAws
