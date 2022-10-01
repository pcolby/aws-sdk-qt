// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
