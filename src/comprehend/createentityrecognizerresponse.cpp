// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
