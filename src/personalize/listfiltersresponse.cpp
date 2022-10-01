// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfiltersresponse.h"
#include "listfiltersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListFiltersResponse
 * \brief The ListFiltersResponse class provides an interace for Personalize ListFilters responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listFilters
 */

/*!
 * Constructs a ListFiltersResponse object for \a reply to \a request, with parent \a parent.
 */
ListFiltersResponse::ListFiltersResponse(
        const ListFiltersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListFiltersResponsePrivate(this), parent)
{
    setRequest(new ListFiltersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFiltersRequest * ListFiltersResponse::request() const
{
    Q_D(const ListFiltersResponse);
    return static_cast<const ListFiltersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListFilters \a response.
 */
void ListFiltersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFiltersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListFiltersResponsePrivate
 * \brief The ListFiltersResponsePrivate class provides private implementation for ListFiltersResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListFiltersResponsePrivate object with public implementation \a q.
 */
ListFiltersResponsePrivate::ListFiltersResponsePrivate(
    ListFiltersResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListFilters response element from \a xml.
 */
void ListFiltersResponsePrivate::parseListFiltersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFiltersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
