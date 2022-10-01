// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteterminologyresponse.h"
#include "deleteterminologyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::DeleteTerminologyResponse
 * \brief The DeleteTerminologyResponse class provides an interace for Translate DeleteTerminology responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::deleteTerminology
 */

/*!
 * Constructs a DeleteTerminologyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTerminologyResponse::DeleteTerminologyResponse(
        const DeleteTerminologyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new DeleteTerminologyResponsePrivate(this), parent)
{
    setRequest(new DeleteTerminologyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTerminologyRequest * DeleteTerminologyResponse::request() const
{
    Q_D(const DeleteTerminologyResponse);
    return static_cast<const DeleteTerminologyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate DeleteTerminology \a response.
 */
void DeleteTerminologyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTerminologyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::DeleteTerminologyResponsePrivate
 * \brief The DeleteTerminologyResponsePrivate class provides private implementation for DeleteTerminologyResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a DeleteTerminologyResponsePrivate object with public implementation \a q.
 */
DeleteTerminologyResponsePrivate::DeleteTerminologyResponsePrivate(
    DeleteTerminologyResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate DeleteTerminology response element from \a xml.
 */
void DeleteTerminologyResponsePrivate::parseDeleteTerminologyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTerminologyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
