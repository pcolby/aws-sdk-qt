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

#include "listlunaclientsresponse.h"
#include "listlunaclientsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::ListLunaClientsResponse
 *
 * \brief The ListLunaClientsResponse class provides an interace for CloudHSM ListLunaClients responses.
 *
 * \ingroup CloudHSM
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHSMClient::listLunaClients
 */

/*!
 * @brief  Constructs a new ListLunaClientsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListLunaClientsResponse::ListLunaClientsResponse(
        const ListLunaClientsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new ListLunaClientsResponsePrivate(this), parent)
{
    setRequest(new ListLunaClientsRequest(request));
    setReply(reply);
}

const ListLunaClientsRequest * ListLunaClientsResponse::request() const
{
    Q_D(const ListLunaClientsResponse);
    return static_cast<const ListLunaClientsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudHSM ListLunaClients response.
 *
 * @param  response  Response to parse.
 */
void ListLunaClientsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListLunaClientsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListLunaClientsResponsePrivate
 *
 * \brief Private implementation for ListLunaClientsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListLunaClientsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListLunaClientsResponse instance.
 */
ListLunaClientsResponsePrivate::ListLunaClientsResponsePrivate(
    ListLunaClientsResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudHSM ListLunaClientsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListLunaClientsResponsePrivate::parseListLunaClientsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLunaClientsResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
