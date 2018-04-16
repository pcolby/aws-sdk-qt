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

#include "exportcertificateresponse.h"
#include "exportcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::ExportCertificateResponse
 *
 * \brief The ExportCertificateResponse class provides an interace for ACM ExportCertificate responses.
 *
 * \ingroup ACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  Welcome to the AWS Certificate Manager (ACM) API
 * 
 *  documentation>
 * 
 *  You can use ACM to manage SSL/TLS certificates for your AWS-based websites and applications. For general information
 *  about using ACM, see the <a href="http://docs.aws.amazon.com/http:/docs.aws.amazon.comacm/latest/userguide/"> <i>AWS
 *  Certificate Manager User Guide</i>
 *
 * \sa ACMClient::exportCertificate
 */

/*!
 * @brief  Constructs a new ExportCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ExportCertificateResponse::ExportCertificateResponse(
        const ExportCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMResponse(new ExportCertificateResponsePrivate(this), parent)
{
    setRequest(new ExportCertificateRequest(request));
    setReply(reply);
}

const ExportCertificateRequest * ExportCertificateResponse::request() const
{
    Q_D(const ExportCertificateResponse);
    return static_cast<const ExportCertificateRequest *>(d->request);
}

/*!
 * @brief  Parse a ACM ExportCertificate response.
 *
 * @param  response  Response to parse.
 */
void ExportCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(ExportCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ExportCertificateResponsePrivate
 *
 * \brief Private implementation for ExportCertificateResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ExportCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ExportCertificateResponse instance.
 */
ExportCertificateResponsePrivate::ExportCertificateResponsePrivate(
    ExportCertificateResponse * const q) : ACMResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ACM ExportCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ExportCertificateResponsePrivate::parseExportCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportCertificateResponse"));
    /// @todo
}

} // namespace ACM
} // namespace QtAws
