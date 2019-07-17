/*
    Copyright 2013-2019 Paul Colby

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
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on
 * 
 *  demand>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
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
