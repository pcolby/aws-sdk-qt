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

#include "disassociatequalificationfromworkerresponse.h"
#include "disassociatequalificationfromworkerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DisassociateQualificationFromWorkerResponse
 *
 * \brief The DisassociateQualificationFromWorkerResponse class encapsulates MTurk DisassociateQualificationFromWorker responses.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::disassociateQualificationFromWorker
 */

/*!
 * @brief  Constructs a new DisassociateQualificationFromWorkerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateQualificationFromWorkerResponse::DisassociateQualificationFromWorkerResponse(
        const DisassociateQualificationFromWorkerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new DisassociateQualificationFromWorkerResponsePrivate(this), parent)
{
    setRequest(new DisassociateQualificationFromWorkerRequest(request));
    setReply(reply);
}

const DisassociateQualificationFromWorkerRequest * DisassociateQualificationFromWorkerResponse::request() const
{
    Q_D(const DisassociateQualificationFromWorkerResponse);
    return static_cast<const DisassociateQualificationFromWorkerRequest *>(d->request);
}

/*!
 * @brief  Parse a MTurk DisassociateQualificationFromWorker response.
 *
 * @param  response  Response to parse.
 */
void DisassociateQualificationFromWorkerResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateQualificationFromWorkerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DisassociateQualificationFromWorkerResponsePrivate
 *
 * \brief Private implementation for DisassociateQualificationFromWorkerResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateQualificationFromWorkerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateQualificationFromWorkerResponse instance.
 */
DisassociateQualificationFromWorkerResponsePrivate::DisassociateQualificationFromWorkerResponsePrivate(
    DisassociateQualificationFromWorkerResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MTurk DisassociateQualificationFromWorkerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateQualificationFromWorkerResponsePrivate::parseDisassociateQualificationFromWorkerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateQualificationFromWorkerResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
