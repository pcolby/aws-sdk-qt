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

#include "describelunaclientresponse.h"
#include "describelunaclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::DescribeLunaClientResponse
 *
 * \brief The DescribeLunaClientResponse class provides an interace for CloudHSM DescribeLunaClient responses.
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
 * \sa CloudHSMClient::describeLunaClient
 */

/*!
 * @brief  Constructs a new DescribeLunaClientResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLunaClientResponse::DescribeLunaClientResponse(
        const DescribeLunaClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new DescribeLunaClientResponsePrivate(this), parent)
{
    setRequest(new DescribeLunaClientRequest(request));
    setReply(reply);
}

const DescribeLunaClientRequest * DescribeLunaClientResponse::request() const
{
    Q_D(const DescribeLunaClientResponse);
    return static_cast<const DescribeLunaClientRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudHSM DescribeLunaClient response.
 *
 * @param  response  Response to parse.
 */
void DescribeLunaClientResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeLunaClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeLunaClientResponsePrivate
 *
 * \brief Private implementation for DescribeLunaClientResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeLunaClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLunaClientResponse instance.
 */
DescribeLunaClientResponsePrivate::DescribeLunaClientResponsePrivate(
    DescribeLunaClientResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudHSM DescribeLunaClientResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLunaClientResponsePrivate::parseDescribeLunaClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLunaClientResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
