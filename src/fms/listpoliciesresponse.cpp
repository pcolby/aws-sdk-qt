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

#include "listpoliciesresponse.h"
#include "listpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::ListPoliciesResponse
 *
 * \brief The ListPoliciesResponse class provides an interace for FMS ListPolicies responses.
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
 * \sa FMSClient::listPolicies
 */

/*!
 * @brief  Constructs a new ListPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPoliciesResponse::ListPoliciesResponse(
        const ListPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FMSResponse(new ListPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListPoliciesRequest(request));
    setReply(reply);
}

const ListPoliciesRequest * ListPoliciesResponse::request() const
{
    Q_D(const ListPoliciesResponse);
    return static_cast<const ListPoliciesRequest *>(d->request);
}

/*!
 * @brief  Parse a FMS ListPolicies response.
 *
 * @param  response  Response to parse.
 */
void ListPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListPoliciesResponsePrivate
 *
 * \brief Private implementation for ListPoliciesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPoliciesResponse instance.
 */
ListPoliciesResponsePrivate::ListPoliciesResponsePrivate(
    ListPoliciesResponse * const q) : FMSResponsePrivate(q)
{

}

/*!
 * @brief  Parse an FMS ListPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPoliciesResponsePrivate::parseListPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPoliciesResponse"));
    /// @todo
}

} // namespace FMS
} // namespace QtAws
