/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describedrtaccessresponse.h"
#include "describedrtaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeDRTAccessResponse
 * \brief The DescribeDRTAccessResponse class provides an interace for Shield DescribeDRTAccess responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
 *
 * \sa ShieldClient::describeDRTAccess
 */

/*!
 * Constructs a DescribeDRTAccessResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDRTAccessResponse::DescribeDRTAccessResponse(
        const DescribeDRTAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DescribeDRTAccessResponsePrivate(this), parent)
{
    setRequest(new DescribeDRTAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDRTAccessRequest * DescribeDRTAccessResponse::request() const
{
    Q_D(const DescribeDRTAccessResponse);
    return static_cast<const DescribeDRTAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DescribeDRTAccess \a response.
 */
void DescribeDRTAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDRTAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DescribeDRTAccessResponsePrivate
 * \brief The DescribeDRTAccessResponsePrivate class provides private implementation for DescribeDRTAccessResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DescribeDRTAccessResponsePrivate object with public implementation \a q.
 */
DescribeDRTAccessResponsePrivate::DescribeDRTAccessResponsePrivate(
    DescribeDRTAccessResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DescribeDRTAccess response element from \a xml.
 */
void DescribeDRTAccessResponsePrivate::parseDescribeDRTAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDRTAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
