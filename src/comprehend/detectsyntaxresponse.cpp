// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
