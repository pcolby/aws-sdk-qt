/*
    Copyright 2013-2018 Paul Colby

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

#include "getfileuploadurlresponse.h"
#include "getfileuploadurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetFileUploadURLResponse
 * \brief The GetFileUploadURLResponse class provides an interace for MTurk GetFileUploadURL responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getFileUploadURL
 */

/*!
 * Constructs a GetFileUploadURLResponse object for \a reply to \a request, with parent \a parent.
 */
GetFileUploadURLResponse::GetFileUploadURLResponse(
        const GetFileUploadURLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetFileUploadURLResponsePrivate(this), parent)
{
    setRequest(new GetFileUploadURLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFileUploadURLRequest * GetFileUploadURLResponse::request() const
{
    Q_D(const GetFileUploadURLResponse);
    return static_cast<const GetFileUploadURLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk GetFileUploadURL \a response.
 */
void GetFileUploadURLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFileUploadURLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::GetFileUploadURLResponsePrivate
 * \brief The GetFileUploadURLResponsePrivate class provides private implementation for GetFileUploadURLResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetFileUploadURLResponsePrivate object with public implementation \a q.
 */
GetFileUploadURLResponsePrivate::GetFileUploadURLResponsePrivate(
    GetFileUploadURLResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk GetFileUploadURL response element from \a xml.
 */
void GetFileUploadURLResponsePrivate::parseGetFileUploadURLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFileUploadURLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
