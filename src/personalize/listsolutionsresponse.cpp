// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsolutionsresponse.h"
#include "listsolutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListSolutionsResponse
 * \brief The ListSolutionsResponse class provides an interace for Personalize ListSolutions responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listSolutions
 */

/*!
 * Constructs a ListSolutionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSolutionsResponse::ListSolutionsResponse(
        const ListSolutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListSolutionsResponsePrivate(this), parent)
{
    setRequest(new ListSolutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSolutionsRequest * ListSolutionsResponse::request() const
{
    Q_D(const ListSolutionsResponse);
    return static_cast<const ListSolutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListSolutions \a response.
 */
void ListSolutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSolutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListSolutionsResponsePrivate
 * \brief The ListSolutionsResponsePrivate class provides private implementation for ListSolutionsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListSolutionsResponsePrivate object with public implementation \a q.
 */
ListSolutionsResponsePrivate::ListSolutionsResponsePrivate(
    ListSolutionsResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListSolutions response element from \a xml.
 */
void ListSolutionsResponsePrivate::parseListSolutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSolutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
