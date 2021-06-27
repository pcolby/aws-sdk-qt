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

#include "updatefunctionresponse.h"
#include "updatefunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateFunctionResponse
 * \brief The UpdateFunctionResponse class provides an interace for CloudFront UpdateFunction responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateFunction
 */

/*!
 * Constructs a UpdateFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFunctionResponse::UpdateFunctionResponse(
        const UpdateFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateFunctionResponsePrivate(this), parent)
{
    setRequest(new UpdateFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFunctionRequest * UpdateFunctionResponse::request() const
{
    return static_cast<const UpdateFunctionRequest *>(CloudFrontResponse::request());
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateFunction \a response.
 */
void UpdateFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateFunctionResponsePrivate
 * \brief The UpdateFunctionResponsePrivate class provides private implementation for UpdateFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateFunctionResponsePrivate object with public implementation \a q.
 */
UpdateFunctionResponsePrivate::UpdateFunctionResponsePrivate(
    UpdateFunctionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateFunction response element from \a xml.
 */
void UpdateFunctionResponsePrivate::parseUpdateFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
