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

#include "associateadminaccountresponse.h"
#include "associateadminaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::AssociateAdminAccountResponse
 *
 * \brief The AssociateAdminAccountResponse class encapsulates FMS AssociateAdminAccount responses.
 *
 * \ingroup FMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FMSClient::associateAdminAccount
 */

/*!
 * @brief  Constructs a new AssociateAdminAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateAdminAccountResponse::AssociateAdminAccountResponse(
        const AssociateAdminAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FMSResponse(new AssociateAdminAccountResponsePrivate(this), parent)
{
    setRequest(new AssociateAdminAccountRequest(request));
    setReply(reply);
}

const AssociateAdminAccountRequest * AssociateAdminAccountResponse::request() const
{
    Q_D(const AssociateAdminAccountResponse);
    return static_cast<const AssociateAdminAccountRequest *>(d->request);
}

/*!
 * @brief  Parse a FMS AssociateAdminAccount response.
 *
 * @param  response  Response to parse.
 */
void AssociateAdminAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateAdminAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AssociateAdminAccountResponsePrivate
 *
 * \brief Private implementation for AssociateAdminAccountResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AssociateAdminAccountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateAdminAccountResponse instance.
 */
AssociateAdminAccountResponsePrivate::AssociateAdminAccountResponsePrivate(
    AssociateAdminAccountResponse * const q) : FMSResponsePrivate(q)
{

}

/*!
 * @brief  Parse an FMS AssociateAdminAccountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateAdminAccountResponsePrivate::parseAssociateAdminAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateAdminAccountResponse"));
    /// @todo
}

} // namespace FMS
} // namespace QtAws
