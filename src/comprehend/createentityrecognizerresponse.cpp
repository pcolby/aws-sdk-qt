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

#include "createentityrecognizerresponse.h"
#include "createentityrecognizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::CreateEntityRecognizerResponse
 * \brief The CreateEntityRecognizerResponse class provides an interace for Comprehend CreateEntityRecognizer responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::createEntityRecognizer
 */

/*!
 * Constructs a CreateEntityRecognizerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEntityRecognizerResponse::CreateEntityRecognizerResponse(
        const CreateEntityRecognizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new CreateEntityRecognizerResponsePrivate(this), parent)
{
    setRequest(new CreateEntityRecognizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEntityRecognizerRequest * CreateEntityRecognizerResponse::request() const
{
    Q_D(const CreateEntityRecognizerResponse);
    return static_cast<const CreateEntityRecognizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend CreateEntityRecognizer \a response.
 */
void CreateEntityRecognizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEntityRecognizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::CreateEntityRecognizerResponsePrivate
 * \brief The CreateEntityRecognizerResponsePrivate class provides private implementation for CreateEntityRecognizerResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a CreateEntityRecognizerResponsePrivate object with public implementation \a q.
 */
CreateEntityRecognizerResponsePrivate::CreateEntityRecognizerResponsePrivate(
    CreateEntityRecognizerResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend CreateEntityRecognizer response element from \a xml.
 */
void CreateEntityRecognizerResponsePrivate::parseCreateEntityRecognizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEntityRecognizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
