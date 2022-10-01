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

#include "updatefilterresponse.h"
#include "updatefilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::UpdateFilterResponse
 * \brief The UpdateFilterResponse class provides an interace for Inspector2 UpdateFilter responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::updateFilter
 */

/*!
 * Constructs a UpdateFilterResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFilterResponse::UpdateFilterResponse(
        const UpdateFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new UpdateFilterResponsePrivate(this), parent)
{
    setRequest(new UpdateFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFilterRequest * UpdateFilterResponse::request() const
{
    Q_D(const UpdateFilterResponse);
    return static_cast<const UpdateFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 UpdateFilter \a response.
 */
void UpdateFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::UpdateFilterResponsePrivate
 * \brief The UpdateFilterResponsePrivate class provides private implementation for UpdateFilterResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a UpdateFilterResponsePrivate object with public implementation \a q.
 */
UpdateFilterResponsePrivate::UpdateFilterResponsePrivate(
    UpdateFilterResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 UpdateFilter response element from \a xml.
 */
void UpdateFilterResponsePrivate::parseUpdateFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
