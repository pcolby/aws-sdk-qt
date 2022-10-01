// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexperiencesresponse.h"
#include "listexperiencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListExperiencesResponse
 * \brief The ListExperiencesResponse class provides an interace for Kendra ListExperiences responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listExperiences
 */

/*!
 * Constructs a ListExperiencesResponse object for \a reply to \a request, with parent \a parent.
 */
ListExperiencesResponse::ListExperiencesResponse(
        const ListExperiencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListExperiencesResponsePrivate(this), parent)
{
    setRequest(new ListExperiencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExperiencesRequest * ListExperiencesResponse::request() const
{
    Q_D(const ListExperiencesResponse);
    return static_cast<const ListExperiencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListExperiences \a response.
 */
void ListExperiencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExperiencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListExperiencesResponsePrivate
 * \brief The ListExperiencesResponsePrivate class provides private implementation for ListExperiencesResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListExperiencesResponsePrivate object with public implementation \a q.
 */
ListExperiencesResponsePrivate::ListExperiencesResponsePrivate(
    ListExperiencesResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListExperiences response element from \a xml.
 */
void ListExperiencesResponsePrivate::parseListExperiencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExperiencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
