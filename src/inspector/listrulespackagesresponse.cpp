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

#include "listrulespackagesresponse.h"
#include "listrulespackagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListRulesPackagesResponse
 * \brief The ListRulesPackagesResponse class provides an interace for Inspector ListRulesPackages responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listRulesPackages
 */

/*!
 * Constructs a ListRulesPackagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListRulesPackagesResponse::ListRulesPackagesResponse(
        const ListRulesPackagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListRulesPackagesResponsePrivate(this), parent)
{
    setRequest(new ListRulesPackagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRulesPackagesRequest * ListRulesPackagesResponse::request() const
{
    Q_D(const ListRulesPackagesResponse);
    return static_cast<const ListRulesPackagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector ListRulesPackages \a response.
 */
void ListRulesPackagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRulesPackagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::ListRulesPackagesResponsePrivate
 * \brief The ListRulesPackagesResponsePrivate class provides private implementation for ListRulesPackagesResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListRulesPackagesResponsePrivate object with public implementation \a q.
 */
ListRulesPackagesResponsePrivate::ListRulesPackagesResponsePrivate(
    ListRulesPackagesResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector ListRulesPackages response element from \a xml.
 */
void ListRulesPackagesResponsePrivate::parseListRulesPackagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRulesPackagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
