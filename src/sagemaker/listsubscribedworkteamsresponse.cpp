/*
    Copyright 2013-2019 Paul Colby

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

#include "listsubscribedworkteamsresponse.h"
#include "listsubscribedworkteamsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListSubscribedWorkteamsResponse
 * \brief The ListSubscribedWorkteamsResponse class provides an interace for SageMaker ListSubscribedWorkteams responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::listSubscribedWorkteams
 */

/*!
 * Constructs a ListSubscribedWorkteamsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSubscribedWorkteamsResponse::ListSubscribedWorkteamsResponse(
        const ListSubscribedWorkteamsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListSubscribedWorkteamsResponsePrivate(this), parent)
{
    setRequest(new ListSubscribedWorkteamsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSubscribedWorkteamsRequest * ListSubscribedWorkteamsResponse::request() const
{
    Q_D(const ListSubscribedWorkteamsResponse);
    return static_cast<const ListSubscribedWorkteamsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListSubscribedWorkteams \a response.
 */
void ListSubscribedWorkteamsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSubscribedWorkteamsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListSubscribedWorkteamsResponsePrivate
 * \brief The ListSubscribedWorkteamsResponsePrivate class provides private implementation for ListSubscribedWorkteamsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListSubscribedWorkteamsResponsePrivate object with public implementation \a q.
 */
ListSubscribedWorkteamsResponsePrivate::ListSubscribedWorkteamsResponsePrivate(
    ListSubscribedWorkteamsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListSubscribedWorkteams response element from \a xml.
 */
void ListSubscribedWorkteamsResponsePrivate::parseListSubscribedWorkteamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSubscribedWorkteamsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
