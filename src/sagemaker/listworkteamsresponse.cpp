/*
    Copyright 2013-2018 Paul Colby

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

#include "listworkteamsresponse.h"
#include "listworkteamsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListWorkteamsResponse
 * \brief The ListWorkteamsResponse class provides an interace for SageMaker ListWorkteams responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::listWorkteams
 */

/*!
 * Constructs a ListWorkteamsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkteamsResponse::ListWorkteamsResponse(
        const ListWorkteamsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListWorkteamsResponsePrivate(this), parent)
{
    setRequest(new ListWorkteamsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkteamsRequest * ListWorkteamsResponse::request() const
{
    Q_D(const ListWorkteamsResponse);
    return static_cast<const ListWorkteamsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListWorkteams \a response.
 */
void ListWorkteamsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkteamsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListWorkteamsResponsePrivate
 * \brief The ListWorkteamsResponsePrivate class provides private implementation for ListWorkteamsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListWorkteamsResponsePrivate object with public implementation \a q.
 */
ListWorkteamsResponsePrivate::ListWorkteamsResponsePrivate(
    ListWorkteamsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListWorkteams response element from \a xml.
 */
void ListWorkteamsResponsePrivate::parseListWorkteamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkteamsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
