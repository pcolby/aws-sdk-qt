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

#include "updateuserdefinedfunctionresponse.h"
#include "updateuserdefinedfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateUserDefinedFunctionResponse
 * \brief The UpdateUserDefinedFunctionResponse class provides an interace for Glue UpdateUserDefinedFunction responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateUserDefinedFunction
 */

/*!
 * Constructs a UpdateUserDefinedFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUserDefinedFunctionResponse::UpdateUserDefinedFunctionResponse(
        const UpdateUserDefinedFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateUserDefinedFunctionResponsePrivate(this), parent)
{
    setRequest(new UpdateUserDefinedFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUserDefinedFunctionRequest * UpdateUserDefinedFunctionResponse::request() const
{
    Q_D(const UpdateUserDefinedFunctionResponse);
    return static_cast<const UpdateUserDefinedFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateUserDefinedFunction \a response.
 */
void UpdateUserDefinedFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUserDefinedFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateUserDefinedFunctionResponsePrivate
 * \brief The UpdateUserDefinedFunctionResponsePrivate class provides private implementation for UpdateUserDefinedFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateUserDefinedFunctionResponsePrivate object with public implementation \a q.
 */
UpdateUserDefinedFunctionResponsePrivate::UpdateUserDefinedFunctionResponsePrivate(
    UpdateUserDefinedFunctionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateUserDefinedFunction response element from \a xml.
 */
void UpdateUserDefinedFunctionResponsePrivate::parseUpdateUserDefinedFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserDefinedFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
