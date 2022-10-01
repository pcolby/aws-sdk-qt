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

#include "deleteexperienceresponse.h"
#include "deleteexperienceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteExperienceResponse
 * \brief The DeleteExperienceResponse class provides an interace for Kendra DeleteExperience responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteExperience
 */

/*!
 * Constructs a DeleteExperienceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteExperienceResponse::DeleteExperienceResponse(
        const DeleteExperienceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DeleteExperienceResponsePrivate(this), parent)
{
    setRequest(new DeleteExperienceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteExperienceRequest * DeleteExperienceResponse::request() const
{
    Q_D(const DeleteExperienceResponse);
    return static_cast<const DeleteExperienceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DeleteExperience \a response.
 */
void DeleteExperienceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteExperienceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DeleteExperienceResponsePrivate
 * \brief The DeleteExperienceResponsePrivate class provides private implementation for DeleteExperienceResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteExperienceResponsePrivate object with public implementation \a q.
 */
DeleteExperienceResponsePrivate::DeleteExperienceResponsePrivate(
    DeleteExperienceResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DeleteExperience response element from \a xml.
 */
void DeleteExperienceResponsePrivate::parseDeleteExperienceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteExperienceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
