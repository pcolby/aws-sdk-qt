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

#include "modifylunaclientresponse.h"
#include "modifylunaclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::ModifyLunaClientResponse
 *
 * \brief The ModifyLunaClientResponse class provides an interace for CloudHSM ModifyLunaClient responses.
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
 * \sa CloudHSMClient::modifyLunaClient
 */

/*!
 * @brief  Constructs a new ModifyLunaClientResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyLunaClientResponse::ModifyLunaClientResponse(
        const ModifyLunaClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new ModifyLunaClientResponsePrivate(this), parent)
{
    setRequest(new ModifyLunaClientRequest(request));
    setReply(reply);
}

const ModifyLunaClientRequest * ModifyLunaClientResponse::request() const
{
    Q_D(const ModifyLunaClientResponse);
    return static_cast<const ModifyLunaClientRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudHSM ModifyLunaClient response.
 *
 * @param  response  Response to parse.
 */
void ModifyLunaClientResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyLunaClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ModifyLunaClientResponsePrivate
 *
 * \brief Private implementation for ModifyLunaClientResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyLunaClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyLunaClientResponse instance.
 */
ModifyLunaClientResponsePrivate::ModifyLunaClientResponsePrivate(
    ModifyLunaClientResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudHSM ModifyLunaClientResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyLunaClientResponsePrivate::parseModifyLunaClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyLunaClientResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
