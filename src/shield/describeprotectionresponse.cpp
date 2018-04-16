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

#include "describeprotectionresponse.h"
#include "describeprotectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeProtectionResponse
 *
 * \brief The DescribeProtectionResponse class provides an interace for Shield DescribeProtection responses.
 *
 * \ingroup Shield
 *
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
 *
 * \sa ShieldClient::describeProtection
 */

/*!
 * @brief  Constructs a new DescribeProtectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeProtectionResponse::DescribeProtectionResponse(
        const DescribeProtectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DescribeProtectionResponsePrivate(this), parent)
{
    setRequest(new DescribeProtectionRequest(request));
    setReply(reply);
}

const DescribeProtectionRequest * DescribeProtectionResponse::request() const
{
    Q_D(const DescribeProtectionResponse);
    return static_cast<const DescribeProtectionRequest *>(d->request);
}

/*!
 * @brief  Parse a Shield DescribeProtection response.
 *
 * @param  response  Response to parse.
 */
void DescribeProtectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeProtectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeProtectionResponsePrivate
 *
 * \brief Private implementation for DescribeProtectionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeProtectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeProtectionResponse instance.
 */
DescribeProtectionResponsePrivate::DescribeProtectionResponsePrivate(
    DescribeProtectionResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Shield DescribeProtectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeProtectionResponsePrivate::parseDescribeProtectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProtectionResponse"));
    /// @todo
}

} // namespace Shield
} // namespace QtAws
