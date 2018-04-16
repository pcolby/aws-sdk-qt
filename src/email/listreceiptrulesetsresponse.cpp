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

#include "listreceiptrulesetsresponse.h"
#include "listreceiptrulesetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::ListReceiptRuleSetsResponse
 *
 * \brief The ListReceiptRuleSetsResponse class provides an interace for SES ListReceiptRuleSets responses.
 *
 * \ingroup SES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SESClient::listReceiptRuleSets
 */

/*!
 * @brief  Constructs a new ListReceiptRuleSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListReceiptRuleSetsResponse::ListReceiptRuleSetsResponse(
        const ListReceiptRuleSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new ListReceiptRuleSetsResponsePrivate(this), parent)
{
    setRequest(new ListReceiptRuleSetsRequest(request));
    setReply(reply);
}

const ListReceiptRuleSetsRequest * ListReceiptRuleSetsResponse::request() const
{
    Q_D(const ListReceiptRuleSetsResponse);
    return static_cast<const ListReceiptRuleSetsRequest *>(d->request);
}

/*!
 * @brief  Parse a SES ListReceiptRuleSets response.
 *
 * @param  response  Response to parse.
 */
void ListReceiptRuleSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListReceiptRuleSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListReceiptRuleSetsResponsePrivate
 *
 * \brief Private implementation for ListReceiptRuleSetsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListReceiptRuleSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListReceiptRuleSetsResponse instance.
 */
ListReceiptRuleSetsResponsePrivate::ListReceiptRuleSetsResponsePrivate(
    ListReceiptRuleSetsResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SES ListReceiptRuleSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListReceiptRuleSetsResponsePrivate::parseListReceiptRuleSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReceiptRuleSetsResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
