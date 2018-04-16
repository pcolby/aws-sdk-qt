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

#include "deletehapgresponse.h"
#include "deletehapgresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::DeleteHapgResponse
 *
 * \brief The DeleteHapgResponse class provides an interace for CloudHSM DeleteHapg responses.
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
 * \sa CloudHSMClient::deleteHapg
 */

/*!
 * @brief  Constructs a new DeleteHapgResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteHapgResponse::DeleteHapgResponse(
        const DeleteHapgRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new DeleteHapgResponsePrivate(this), parent)
{
    setRequest(new DeleteHapgRequest(request));
    setReply(reply);
}

const DeleteHapgRequest * DeleteHapgResponse::request() const
{
    Q_D(const DeleteHapgResponse);
    return static_cast<const DeleteHapgRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudHSM DeleteHapg response.
 *
 * @param  response  Response to parse.
 */
void DeleteHapgResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteHapgResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteHapgResponsePrivate
 *
 * \brief Private implementation for DeleteHapgResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteHapgResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteHapgResponse instance.
 */
DeleteHapgResponsePrivate::DeleteHapgResponsePrivate(
    DeleteHapgResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudHSM DeleteHapgResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteHapgResponsePrivate::parseDeleteHapgResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHapgResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
