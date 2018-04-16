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

#include "disassociatedelegatefromresourceresponse.h"
#include "disassociatedelegatefromresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::DisassociateDelegateFromResourceResponse
 *
 * \brief The DisassociateDelegateFromResourceResponse class provides an interace for WorkMail DisassociateDelegateFromResource responses.
 *
 * \ingroup WorkMail
 *
 *  Amazon WorkMail is a secure, managed business email and calendaring service with support for existing desktop and mobile
 *  email clients. You can access your email, contacts, and calendars using Microsoft Outlook, your browser, or their native
 *  iOS and Android email applications. You can integrate Amazon WorkMail with your existing corporate directory and control
 *  both the keys that encrypt your data and the location in which your data is
 * 
 *  stored>
 * 
 *  The Amazon WorkMail API is designed for the following
 * 
 *  scenarios> <ul> <li>
 * 
 *  Listing and describing
 * 
 *  organization> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  user> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  group> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  resource> </li> </ul>
 * 
 *  All Amazon WorkMail API actions are Amazon-authenticated and certificate-signed. They not only require the use of the
 *  AWS SDK, but also allow for the exclusive use of IAM users and roles to help facilitate access, trust, and permission
 *  policies. By creating a role and allowing an IAM user to access the Amazon WorkMail site, the IAM user gains full
 *  administrative visibility into the entire Amazon WorkMail organization (or as set in the IAM policy). This includes, but
 *  is not limited to, the ability to create, update, and delete users, groups, and resources. This allows developers to
 *  perform the scenarios listed above, as well as give users the ability to grant access on a selective basis using the IAM
 *
 * \sa WorkMailClient::disassociateDelegateFromResource
 */

/*!
 * @brief  Constructs a new DisassociateDelegateFromResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateDelegateFromResourceResponse::DisassociateDelegateFromResourceResponse(
        const DisassociateDelegateFromResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new DisassociateDelegateFromResourceResponsePrivate(this), parent)
{
    setRequest(new DisassociateDelegateFromResourceRequest(request));
    setReply(reply);
}

const DisassociateDelegateFromResourceRequest * DisassociateDelegateFromResourceResponse::request() const
{
    Q_D(const DisassociateDelegateFromResourceResponse);
    return static_cast<const DisassociateDelegateFromResourceRequest *>(d->request);
}

/*!
 * @brief  Parse a WorkMail DisassociateDelegateFromResource response.
 *
 * @param  response  Response to parse.
 */
void DisassociateDelegateFromResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateDelegateFromResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DisassociateDelegateFromResourceResponsePrivate
 *
 * \brief Private implementation for DisassociateDelegateFromResourceResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateDelegateFromResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateDelegateFromResourceResponse instance.
 */
DisassociateDelegateFromResourceResponsePrivate::DisassociateDelegateFromResourceResponsePrivate(
    DisassociateDelegateFromResourceResponse * const q) : WorkMailResponsePrivate(q)
{

}

/*!
 * @brief  Parse an WorkMail DisassociateDelegateFromResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateDelegateFromResourceResponsePrivate::parseDisassociateDelegateFromResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateDelegateFromResourceResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws
