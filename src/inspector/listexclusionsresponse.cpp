// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexclusionsresponse.h"
#include "listexclusionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListExclusionsResponse
 * \brief The ListExclusionsResponse class provides an interace for Inspector ListExclusions responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listExclusions
 */

/*!
 * Constructs a ListExclusionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExclusionsResponse::ListExclusionsResponse(
        const ListExclusionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListExclusionsResponsePrivate(this), parent)
{
    setRequest(new ListExclusionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExclusionsRequest * ListExclusionsResponse::request() const
{
    Q_D(const ListExclusionsResponse);
    return static_cast<const ListExclusionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector ListExclusions \a response.
 */
void ListExclusionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExclusionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::ListExclusionsResponsePrivate
 * \brief The ListExclusionsResponsePrivate class provides private implementation for ListExclusionsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListExclusionsResponsePrivate object with public implementation \a q.
 */
ListExclusionsResponsePrivate::ListExclusionsResponsePrivate(
    ListExclusionsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector ListExclusions response element from \a xml.
 */
void ListExclusionsResponsePrivate::parseListExclusionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExclusionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
