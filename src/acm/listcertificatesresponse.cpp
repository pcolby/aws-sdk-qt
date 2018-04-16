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

#include "listcertificatesresponse.h"
#include "listcertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::ListCertificatesResponse
 *
 * \brief The ListCertificatesResponse class encapsulates ACM ListCertificates responses.
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
 * \sa ACMClient::listCertificates
 */

/*!
 * @brief  Constructs a new ListCertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCertificatesResponse::ListCertificatesResponse(
        const ListCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMResponse(new ListCertificatesResponsePrivate(this), parent)
{
    setRequest(new ListCertificatesRequest(request));
    setReply(reply);
}

const ListCertificatesRequest * ListCertificatesResponse::request() const
{
    Q_D(const ListCertificatesResponse);
    return static_cast<const ListCertificatesRequest *>(d->request);
}

/*!
 * @brief  Parse a ACM ListCertificates response.
 *
 * @param  response  Response to parse.
 */
void ListCertificatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListCertificatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListCertificatesResponsePrivate
 *
 * \brief Private implementation for ListCertificatesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListCertificatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCertificatesResponse instance.
 */
ListCertificatesResponsePrivate::ListCertificatesResponsePrivate(
    ListCertificatesResponse * const q) : ACMResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ACM ListCertificatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCertificatesResponsePrivate::parseListCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCertificatesResponse"));
    /// @todo
}

} // namespace ACM
} // namespace QtAws
