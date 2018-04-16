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

#include "listhapgsresponse.h"
#include "listhapgsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::ListHapgsResponse
 *
 * \brief The ListHapgsResponse class provides an interace for CloudHSM ListHapgs responses.
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
 * \sa CloudHSMClient::listHapgs
 */

/*!
 * @brief  Constructs a new ListHapgsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListHapgsResponse::ListHapgsResponse(
        const ListHapgsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new ListHapgsResponsePrivate(this), parent)
{
    setRequest(new ListHapgsRequest(request));
    setReply(reply);
}

const ListHapgsRequest * ListHapgsResponse::request() const
{
    Q_D(const ListHapgsResponse);
    return static_cast<const ListHapgsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudHSM ListHapgs response.
 *
 * @param  response  Response to parse.
 */
void ListHapgsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListHapgsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListHapgsResponsePrivate
 *
 * \brief Private implementation for ListHapgsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListHapgsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListHapgsResponse instance.
 */
ListHapgsResponsePrivate::ListHapgsResponsePrivate(
    ListHapgsResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudHSM ListHapgsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListHapgsResponsePrivate::parseListHapgsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHapgsResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
