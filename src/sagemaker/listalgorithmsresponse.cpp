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

#include "listalgorithmsresponse.h"
#include "listalgorithmsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAlgorithmsResponse
 * \brief The ListAlgorithmsResponse class provides an interace for SageMaker ListAlgorithms responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::listAlgorithms
 */

/*!
 * Constructs a ListAlgorithmsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAlgorithmsResponse::ListAlgorithmsResponse(
        const ListAlgorithmsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListAlgorithmsResponsePrivate(this), parent)
{
    setRequest(new ListAlgorithmsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAlgorithmsRequest * ListAlgorithmsResponse::request() const
{
    Q_D(const ListAlgorithmsResponse);
    return static_cast<const ListAlgorithmsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListAlgorithms \a response.
 */
void ListAlgorithmsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAlgorithmsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListAlgorithmsResponsePrivate
 * \brief The ListAlgorithmsResponsePrivate class provides private implementation for ListAlgorithmsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAlgorithmsResponsePrivate object with public implementation \a q.
 */
ListAlgorithmsResponsePrivate::ListAlgorithmsResponsePrivate(
    ListAlgorithmsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListAlgorithms response element from \a xml.
 */
void ListAlgorithmsResponsePrivate::parseListAlgorithmsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAlgorithmsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
