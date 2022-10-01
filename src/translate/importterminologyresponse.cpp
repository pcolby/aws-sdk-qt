// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importterminologyresponse.h"
#include "importterminologyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ImportTerminologyResponse
 * \brief The ImportTerminologyResponse class provides an interace for Translate ImportTerminology responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::importTerminology
 */

/*!
 * Constructs a ImportTerminologyResponse object for \a reply to \a request, with parent \a parent.
 */
ImportTerminologyResponse::ImportTerminologyResponse(
        const ImportTerminologyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new ImportTerminologyResponsePrivate(this), parent)
{
    setRequest(new ImportTerminologyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportTerminologyRequest * ImportTerminologyResponse::request() const
{
    Q_D(const ImportTerminologyResponse);
    return static_cast<const ImportTerminologyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate ImportTerminology \a response.
 */
void ImportTerminologyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportTerminologyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::ImportTerminologyResponsePrivate
 * \brief The ImportTerminologyResponsePrivate class provides private implementation for ImportTerminologyResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ImportTerminologyResponsePrivate object with public implementation \a q.
 */
ImportTerminologyResponsePrivate::ImportTerminologyResponsePrivate(
    ImportTerminologyResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate ImportTerminology response element from \a xml.
 */
void ImportTerminologyResponsePrivate::parseImportTerminologyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportTerminologyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
