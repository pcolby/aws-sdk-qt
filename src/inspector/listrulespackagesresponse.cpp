// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
