// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdetectsyntaxresponse.h"
#include "batchdetectsyntaxresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::BatchDetectSyntaxResponse
 * \brief The BatchDetectSyntaxResponse class provides an interace for Comprehend BatchDetectSyntax responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::batchDetectSyntax
 */

/*!
 * Constructs a BatchDetectSyntaxResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDetectSyntaxResponse::BatchDetectSyntaxResponse(
        const BatchDetectSyntaxRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new BatchDetectSyntaxResponsePrivate(this), parent)
{
    setRequest(new BatchDetectSyntaxRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDetectSyntaxRequest * BatchDetectSyntaxResponse::request() const
{
    Q_D(const BatchDetectSyntaxResponse);
    return static_cast<const BatchDetectSyntaxRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend BatchDetectSyntax \a response.
 */
void BatchDetectSyntaxResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDetectSyntaxResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::BatchDetectSyntaxResponsePrivate
 * \brief The BatchDetectSyntaxResponsePrivate class provides private implementation for BatchDetectSyntaxResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a BatchDetectSyntaxResponsePrivate object with public implementation \a q.
 */
BatchDetectSyntaxResponsePrivate::BatchDetectSyntaxResponsePrivate(
    BatchDetectSyntaxResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend BatchDetectSyntax response element from \a xml.
 */
void BatchDetectSyntaxResponsePrivate::parseBatchDetectSyntaxResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDetectSyntaxResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
