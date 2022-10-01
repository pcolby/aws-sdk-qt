/*
    Copyright 2013-2021 Paul Colby

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

#include "enableresponse.h"
#include "enableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::EnableResponse
 * \brief The EnableResponse class provides an interace for Inspector2 Enable responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::enable
 */

/*!
 * Constructs a EnableResponse object for \a reply to \a request, with parent \a parent.
 */
EnableResponse::EnableResponse(
        const EnableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new EnableResponsePrivate(this), parent)
{
    setRequest(new EnableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableRequest * EnableResponse::request() const
{
    Q_D(const EnableResponse);
    return static_cast<const EnableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 Enable \a response.
 */
void EnableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::EnableResponsePrivate
 * \brief The EnableResponsePrivate class provides private implementation for EnableResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a EnableResponsePrivate object with public implementation \a q.
 */
EnableResponsePrivate::EnableResponsePrivate(
    EnableResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 Enable response element from \a xml.
 */
void EnableResponsePrivate::parseEnableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
