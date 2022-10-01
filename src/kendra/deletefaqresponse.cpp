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

#include "deletefaqresponse.h"
#include "deletefaqresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteFaqResponse
 * \brief The DeleteFaqResponse class provides an interace for Kendra DeleteFaq responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteFaq
 */

/*!
 * Constructs a DeleteFaqResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFaqResponse::DeleteFaqResponse(
        const DeleteFaqRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DeleteFaqResponsePrivate(this), parent)
{
    setRequest(new DeleteFaqRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFaqRequest * DeleteFaqResponse::request() const
{
    Q_D(const DeleteFaqResponse);
    return static_cast<const DeleteFaqRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DeleteFaq \a response.
 */
void DeleteFaqResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFaqResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DeleteFaqResponsePrivate
 * \brief The DeleteFaqResponsePrivate class provides private implementation for DeleteFaqResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteFaqResponsePrivate object with public implementation \a q.
 */
DeleteFaqResponsePrivate::DeleteFaqResponsePrivate(
    DeleteFaqResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DeleteFaq response element from \a xml.
 */
void DeleteFaqResponsePrivate::parseDeleteFaqResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFaqResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
