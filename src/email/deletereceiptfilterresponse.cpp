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

#include "deletereceiptfilterresponse.h"
#include "deletereceiptfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DeleteReceiptFilterResponse
 *
 * \brief The DeleteReceiptFilterResponse class provides an interace for SES DeleteReceiptFilter responses.
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
 * \sa SESClient::deleteReceiptFilter
 */

/*!
 * @brief  Constructs a new DeleteReceiptFilterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteReceiptFilterResponse::DeleteReceiptFilterResponse(
        const DeleteReceiptFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DeleteReceiptFilterResponsePrivate(this), parent)
{
    setRequest(new DeleteReceiptFilterRequest(request));
    setReply(reply);
}

const DeleteReceiptFilterRequest * DeleteReceiptFilterResponse::request() const
{
    Q_D(const DeleteReceiptFilterResponse);
    return static_cast<const DeleteReceiptFilterRequest *>(d->request);
}

/*!
 * @brief  Parse a SES DeleteReceiptFilter response.
 *
 * @param  response  Response to parse.
 */
void DeleteReceiptFilterResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteReceiptFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteReceiptFilterResponsePrivate
 *
 * \brief Private implementation for DeleteReceiptFilterResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteReceiptFilterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteReceiptFilterResponse instance.
 */
DeleteReceiptFilterResponsePrivate::DeleteReceiptFilterResponsePrivate(
    DeleteReceiptFilterResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SES DeleteReceiptFilterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteReceiptFilterResponsePrivate::parseDeleteReceiptFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReceiptFilterResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
