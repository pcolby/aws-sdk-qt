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

#include "deletesolutionresponse.h"
#include "deletesolutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteSolutionResponse
 * \brief The DeleteSolutionResponse class provides an interace for Personalize DeleteSolution responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteSolution
 */

/*!
 * Constructs a DeleteSolutionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSolutionResponse::DeleteSolutionResponse(
        const DeleteSolutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DeleteSolutionResponsePrivate(this), parent)
{
    setRequest(new DeleteSolutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSolutionRequest * DeleteSolutionResponse::request() const
{
    Q_D(const DeleteSolutionResponse);
    return static_cast<const DeleteSolutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DeleteSolution \a response.
 */
void DeleteSolutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSolutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DeleteSolutionResponsePrivate
 * \brief The DeleteSolutionResponsePrivate class provides private implementation for DeleteSolutionResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteSolutionResponsePrivate object with public implementation \a q.
 */
DeleteSolutionResponsePrivate::DeleteSolutionResponsePrivate(
    DeleteSolutionResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DeleteSolution response element from \a xml.
 */
void DeleteSolutionResponsePrivate::parseDeleteSolutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSolutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
