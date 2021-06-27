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

#include "updateclassifierresponse.h"
#include "updateclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateClassifierResponse
 * \brief The UpdateClassifierResponse class provides an interace for Glue UpdateClassifier responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateClassifier
 */

/*!
 * Constructs a UpdateClassifierResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateClassifierResponse::UpdateClassifierResponse(
        const UpdateClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateClassifierResponsePrivate(this), parent)
{
    setRequest(new UpdateClassifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateClassifierRequest * UpdateClassifierResponse::request() const
{
    return static_cast<const UpdateClassifierRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue UpdateClassifier \a response.
 */
void UpdateClassifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateClassifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateClassifierResponsePrivate
 * \brief The UpdateClassifierResponsePrivate class provides private implementation for UpdateClassifierResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateClassifierResponsePrivate object with public implementation \a q.
 */
UpdateClassifierResponsePrivate::UpdateClassifierResponsePrivate(
    UpdateClassifierResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateClassifier response element from \a xml.
 */
void UpdateClassifierResponsePrivate::parseUpdateClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClassifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
