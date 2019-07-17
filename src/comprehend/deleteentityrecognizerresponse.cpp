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

#include "deleteentityrecognizerresponse.h"
#include "deleteentityrecognizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DeleteEntityRecognizerResponse
 * \brief The DeleteEntityRecognizerResponse class provides an interace for Comprehend DeleteEntityRecognizer responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::deleteEntityRecognizer
 */

/*!
 * Constructs a DeleteEntityRecognizerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEntityRecognizerResponse::DeleteEntityRecognizerResponse(
        const DeleteEntityRecognizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DeleteEntityRecognizerResponsePrivate(this), parent)
{
    setRequest(new DeleteEntityRecognizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEntityRecognizerRequest * DeleteEntityRecognizerResponse::request() const
{
    Q_D(const DeleteEntityRecognizerResponse);
    return static_cast<const DeleteEntityRecognizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DeleteEntityRecognizer \a response.
 */
void DeleteEntityRecognizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEntityRecognizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DeleteEntityRecognizerResponsePrivate
 * \brief The DeleteEntityRecognizerResponsePrivate class provides private implementation for DeleteEntityRecognizerResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DeleteEntityRecognizerResponsePrivate object with public implementation \a q.
 */
DeleteEntityRecognizerResponsePrivate::DeleteEntityRecognizerResponsePrivate(
    DeleteEntityRecognizerResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DeleteEntityRecognizer response element from \a xml.
 */
void DeleteEntityRecognizerResponsePrivate::parseDeleteEntityRecognizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEntityRecognizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
