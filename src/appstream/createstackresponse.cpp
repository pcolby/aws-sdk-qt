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

#include "createstackresponse.h"
#include "createstackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateStackResponse
 * \brief The CreateStackResponse class provides an interace for AppStream CreateStack responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::createStack
 */

/*!
 * Constructs a CreateStackResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStackResponse::CreateStackResponse(
        const CreateStackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new CreateStackResponsePrivate(this), parent)
{
    setRequest(new CreateStackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStackRequest * CreateStackResponse::request() const
{
    Q_D(const CreateStackResponse);
    return static_cast<const CreateStackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream CreateStack \a response.
 */
void CreateStackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::CreateStackResponsePrivate
 * \brief The CreateStackResponsePrivate class provides private implementation for CreateStackResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a CreateStackResponsePrivate object with public implementation \a q.
 */
CreateStackResponsePrivate::CreateStackResponsePrivate(
    CreateStackResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream CreateStack response element from \a xml.
 */
void CreateStackResponsePrivate::parseCreateStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
