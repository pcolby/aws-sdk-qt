// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsolutionversionsresponse.h"
#include "listsolutionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListSolutionVersionsResponse
 * \brief The ListSolutionVersionsResponse class provides an interace for Personalize ListSolutionVersions responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listSolutionVersions
 */

/*!
 * Constructs a ListSolutionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSolutionVersionsResponse::ListSolutionVersionsResponse(
        const ListSolutionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListSolutionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListSolutionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSolutionVersionsRequest * ListSolutionVersionsResponse::request() const
{
    Q_D(const ListSolutionVersionsResponse);
    return static_cast<const ListSolutionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListSolutionVersions \a response.
 */
void ListSolutionVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSolutionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListSolutionVersionsResponsePrivate
 * \brief The ListSolutionVersionsResponsePrivate class provides private implementation for ListSolutionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListSolutionVersionsResponsePrivate object with public implementation \a q.
 */
ListSolutionVersionsResponsePrivate::ListSolutionVersionsResponsePrivate(
    ListSolutionVersionsResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListSolutionVersions response element from \a xml.
 */
void ListSolutionVersionsResponsePrivate::parseListSolutionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSolutionVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
