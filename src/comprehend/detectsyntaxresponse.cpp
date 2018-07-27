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

#include "detectsyntaxresponse.h"
#include "detectsyntaxresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectSyntaxResponse
 * \brief The DetectSyntaxResponse class provides an interace for Comprehend DetectSyntax responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectSyntax
 */

/*!
 * Constructs a DetectSyntaxResponse object for \a reply to \a request, with parent \a parent.
 */
DetectSyntaxResponse::DetectSyntaxResponse(
        const DetectSyntaxRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DetectSyntaxResponsePrivate(this), parent)
{
    setRequest(new DetectSyntaxRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectSyntaxRequest * DetectSyntaxResponse::request() const
{
    Q_D(const DetectSyntaxResponse);
    return static_cast<const DetectSyntaxRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DetectSyntax \a response.
 */
void DetectSyntaxResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectSyntaxResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DetectSyntaxResponsePrivate
 * \brief The DetectSyntaxResponsePrivate class provides private implementation for DetectSyntaxResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectSyntaxResponsePrivate object with public implementation \a q.
 */
DetectSyntaxResponsePrivate::DetectSyntaxResponsePrivate(
    DetectSyntaxResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DetectSyntax response element from \a xml.
 */
void DetectSyntaxResponsePrivate::parseDetectSyntaxResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectSyntaxResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
