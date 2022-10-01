// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetsresponse.h"
#include "listdatasetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListDatasetsResponse
 * \brief The ListDatasetsResponse class provides an interace for Personalize ListDatasets responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listDatasets
 */

/*!
 * Constructs a ListDatasetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDatasetsResponse::ListDatasetsResponse(
        const ListDatasetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListDatasetsResponsePrivate(this), parent)
{
    setRequest(new ListDatasetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDatasetsRequest * ListDatasetsResponse::request() const
{
    Q_D(const ListDatasetsResponse);
    return static_cast<const ListDatasetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListDatasets \a response.
 */
void ListDatasetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDatasetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListDatasetsResponsePrivate
 * \brief The ListDatasetsResponsePrivate class provides private implementation for ListDatasetsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListDatasetsResponsePrivate object with public implementation \a q.
 */
ListDatasetsResponsePrivate::ListDatasetsResponsePrivate(
    ListDatasetsResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListDatasets response element from \a xml.
 */
void ListDatasetsResponsePrivate::parseListDatasetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatasetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
