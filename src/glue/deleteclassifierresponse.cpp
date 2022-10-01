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

#include "deleteclassifierresponse.h"
#include "deleteclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteClassifierResponse
 * \brief The DeleteClassifierResponse class provides an interace for Glue DeleteClassifier responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteClassifier
 */

/*!
 * Constructs a DeleteClassifierResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteClassifierResponse::DeleteClassifierResponse(
        const DeleteClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteClassifierResponsePrivate(this), parent)
{
    setRequest(new DeleteClassifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteClassifierRequest * DeleteClassifierResponse::request() const
{
    Q_D(const DeleteClassifierResponse);
    return static_cast<const DeleteClassifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteClassifier \a response.
 */
void DeleteClassifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteClassifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteClassifierResponsePrivate
 * \brief The DeleteClassifierResponsePrivate class provides private implementation for DeleteClassifierResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteClassifierResponsePrivate object with public implementation \a q.
 */
DeleteClassifierResponsePrivate::DeleteClassifierResponsePrivate(
    DeleteClassifierResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteClassifier response element from \a xml.
 */
void DeleteClassifierResponsePrivate::parseDeleteClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClassifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
