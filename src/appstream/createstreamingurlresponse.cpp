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

#include "createstreamingurlresponse.h"
#include "createstreamingurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateStreamingURLResponse
 * \brief The CreateStreamingURLResponse class provides an interace for AppStream CreateStreamingURL responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::createStreamingURL
 */

/*!
 * Constructs a CreateStreamingURLResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStreamingURLResponse::CreateStreamingURLResponse(
        const CreateStreamingURLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new CreateStreamingURLResponsePrivate(this), parent)
{
    setRequest(new CreateStreamingURLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStreamingURLRequest * CreateStreamingURLResponse::request() const
{
    Q_D(const CreateStreamingURLResponse);
    return static_cast<const CreateStreamingURLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream CreateStreamingURL \a response.
 */
void CreateStreamingURLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStreamingURLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::CreateStreamingURLResponsePrivate
 * \brief The CreateStreamingURLResponsePrivate class provides private implementation for CreateStreamingURLResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a CreateStreamingURLResponsePrivate object with public implementation \a q.
 */
CreateStreamingURLResponsePrivate::CreateStreamingURLResponsePrivate(
    CreateStreamingURLResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream CreateStreamingURL response element from \a xml.
 */
void CreateStreamingURLResponsePrivate::parseCreateStreamingURLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamingURLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
