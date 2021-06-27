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

#include "createcomponentresponse.h"
#include "createcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::CreateComponentResponse
 * \brief The CreateComponentResponse class provides an interace for imagebuilder CreateComponent responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::createComponent
 */

/*!
 * Constructs a CreateComponentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateComponentResponse::CreateComponentResponse(
        const CreateComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new CreateComponentResponsePrivate(this), parent)
{
    setRequest(new CreateComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateComponentRequest * CreateComponentResponse::request() const
{
    return static_cast<const CreateComponentRequest *>(imagebuilderResponse::request());
}

/*!
 * \reimp
 * Parses a successful imagebuilder CreateComponent \a response.
 */
void CreateComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::CreateComponentResponsePrivate
 * \brief The CreateComponentResponsePrivate class provides private implementation for CreateComponentResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a CreateComponentResponsePrivate object with public implementation \a q.
 */
CreateComponentResponsePrivate::CreateComponentResponsePrivate(
    CreateComponentResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder CreateComponent response element from \a xml.
 */
void CreateComponentResponsePrivate::parseCreateComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
