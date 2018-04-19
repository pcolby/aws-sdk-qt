/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "selectobjectcontentresponse.h"
#include "selectobjectcontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::SelectObjectContentResponse
 * \brief The SelectObjectContentResponse class provides an interace for S3 SelectObjectContent responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::selectObjectContent
 */

/*!
 * Constructs a SelectObjectContentResponse object for \a reply to \a request, with parent \a parent.
 */
SelectObjectContentResponse::SelectObjectContentResponse(
        const SelectObjectContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new SelectObjectContentResponsePrivate(this), parent)
{
    setRequest(new SelectObjectContentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SelectObjectContentRequest * SelectObjectContentResponse::request() const
{
    Q_D(const SelectObjectContentResponse);
    return static_cast<const SelectObjectContentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 SelectObjectContent \a response.
 */
void SelectObjectContentResponse::parseSuccess(QIODevice &response)
{
    Q_D(SelectObjectContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::SelectObjectContentResponsePrivate
 * \brief The SelectObjectContentResponsePrivate class provides private implementation for SelectObjectContentResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a SelectObjectContentResponsePrivate object with public implementation \a q.
 */
SelectObjectContentResponsePrivate::SelectObjectContentResponsePrivate(
    SelectObjectContentResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 SelectObjectContent response element from \a xml.
 */
void SelectObjectContentResponsePrivate::parseSelectObjectContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SelectObjectContentResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
