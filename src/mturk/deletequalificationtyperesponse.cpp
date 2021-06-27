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

#include "deletequalificationtyperesponse.h"
#include "deletequalificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DeleteQualificationTypeResponse
 * \brief The DeleteQualificationTypeResponse class provides an interace for MTurk DeleteQualificationType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::deleteQualificationType
 */

/*!
 * Constructs a DeleteQualificationTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteQualificationTypeResponse::DeleteQualificationTypeResponse(
        const DeleteQualificationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new DeleteQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteQualificationTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteQualificationTypeRequest * DeleteQualificationTypeResponse::request() const
{
    return static_cast<const DeleteQualificationTypeRequest *>(MTurkResponse::request());
}

/*!
 * \reimp
 * Parses a successful MTurk DeleteQualificationType \a response.
 */
void DeleteQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteQualificationTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::DeleteQualificationTypeResponsePrivate
 * \brief The DeleteQualificationTypeResponsePrivate class provides private implementation for DeleteQualificationTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a DeleteQualificationTypeResponsePrivate object with public implementation \a q.
 */
DeleteQualificationTypeResponsePrivate::DeleteQualificationTypeResponsePrivate(
    DeleteQualificationTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk DeleteQualificationType response element from \a xml.
 */
void DeleteQualificationTypeResponsePrivate::parseDeleteQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteQualificationTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
