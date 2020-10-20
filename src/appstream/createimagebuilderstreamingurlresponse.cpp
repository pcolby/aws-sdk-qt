/*
    Copyright 2013-2020 Paul Colby

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

#include "createimagebuilderstreamingurlresponse.h"
#include "createimagebuilderstreamingurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateImageBuilderStreamingURLResponse
 * \brief The CreateImageBuilderStreamingURLResponse class provides an interace for AppStream CreateImageBuilderStreamingURL responses.
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
 * \sa AppStreamClient::createImageBuilderStreamingURL
 */

/*!
 * Constructs a CreateImageBuilderStreamingURLResponse object for \a reply to \a request, with parent \a parent.
 */
CreateImageBuilderStreamingURLResponse::CreateImageBuilderStreamingURLResponse(
        const CreateImageBuilderStreamingURLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new CreateImageBuilderStreamingURLResponsePrivate(this), parent)
{
    setRequest(new CreateImageBuilderStreamingURLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateImageBuilderStreamingURLRequest * CreateImageBuilderStreamingURLResponse::request() const
{
    Q_D(const CreateImageBuilderStreamingURLResponse);
    return static_cast<const CreateImageBuilderStreamingURLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream CreateImageBuilderStreamingURL \a response.
 */
void CreateImageBuilderStreamingURLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateImageBuilderStreamingURLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::CreateImageBuilderStreamingURLResponsePrivate
 * \brief The CreateImageBuilderStreamingURLResponsePrivate class provides private implementation for CreateImageBuilderStreamingURLResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a CreateImageBuilderStreamingURLResponsePrivate object with public implementation \a q.
 */
CreateImageBuilderStreamingURLResponsePrivate::CreateImageBuilderStreamingURLResponsePrivate(
    CreateImageBuilderStreamingURLResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream CreateImageBuilderStreamingURL response element from \a xml.
 */
void CreateImageBuilderStreamingURLResponsePrivate::parseCreateImageBuilderStreamingURLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImageBuilderStreamingURLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
