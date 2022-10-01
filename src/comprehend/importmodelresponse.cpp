// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importmodelresponse.h"
#include "importmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ImportModelResponse
 * \brief The ImportModelResponse class provides an interace for Comprehend ImportModel responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::importModel
 */

/*!
 * Constructs a ImportModelResponse object for \a reply to \a request, with parent \a parent.
 */
ImportModelResponse::ImportModelResponse(
        const ImportModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ImportModelResponsePrivate(this), parent)
{
    setRequest(new ImportModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportModelRequest * ImportModelResponse::request() const
{
    Q_D(const ImportModelResponse);
    return static_cast<const ImportModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ImportModel \a response.
 */
void ImportModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ImportModelResponsePrivate
 * \brief The ImportModelResponsePrivate class provides private implementation for ImportModelResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ImportModelResponsePrivate object with public implementation \a q.
 */
ImportModelResponsePrivate::ImportModelResponsePrivate(
    ImportModelResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ImportModel response element from \a xml.
 */
void ImportModelResponsePrivate::parseImportModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
