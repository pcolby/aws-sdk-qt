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

#include "createdirectoryconfigresponse.h"
#include "createdirectoryconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateDirectoryConfigResponse
 * \brief The CreateDirectoryConfigResponse class provides an interace for AppStream CreateDirectoryConfig responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::createDirectoryConfig
 */

/*!
 * Constructs a CreateDirectoryConfigResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDirectoryConfigResponse::CreateDirectoryConfigResponse(
        const CreateDirectoryConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new CreateDirectoryConfigResponsePrivate(this), parent)
{
    setRequest(new CreateDirectoryConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDirectoryConfigRequest * CreateDirectoryConfigResponse::request() const
{
    Q_D(const CreateDirectoryConfigResponse);
    return static_cast<const CreateDirectoryConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream CreateDirectoryConfig \a response.
 */
void CreateDirectoryConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDirectoryConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::CreateDirectoryConfigResponsePrivate
 * \brief The CreateDirectoryConfigResponsePrivate class provides private implementation for CreateDirectoryConfigResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a CreateDirectoryConfigResponsePrivate object with public implementation \a q.
 */
CreateDirectoryConfigResponsePrivate::CreateDirectoryConfigResponsePrivate(
    CreateDirectoryConfigResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream CreateDirectoryConfig response element from \a xml.
 */
void CreateDirectoryConfigResponsePrivate::parseCreateDirectoryConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDirectoryConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
