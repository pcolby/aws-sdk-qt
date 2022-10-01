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

#include "disableresponse.h"
#include "disableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::DisableResponse
 * \brief The DisableResponse class provides an interace for Inspector2 Disable responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::disable
 */

/*!
 * Constructs a DisableResponse object for \a reply to \a request, with parent \a parent.
 */
DisableResponse::DisableResponse(
        const DisableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new DisableResponsePrivate(this), parent)
{
    setRequest(new DisableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableRequest * DisableResponse::request() const
{
    Q_D(const DisableResponse);
    return static_cast<const DisableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 Disable \a response.
 */
void DisableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::DisableResponsePrivate
 * \brief The DisableResponsePrivate class provides private implementation for DisableResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a DisableResponsePrivate object with public implementation \a q.
 */
DisableResponsePrivate::DisableResponsePrivate(
    DisableResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 Disable response element from \a xml.
 */
void DisableResponsePrivate::parseDisableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
