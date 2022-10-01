// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getterminologyresponse.h"
#include "getterminologyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::GetTerminologyResponse
 * \brief The GetTerminologyResponse class provides an interace for Translate GetTerminology responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::getTerminology
 */

/*!
 * Constructs a GetTerminologyResponse object for \a reply to \a request, with parent \a parent.
 */
GetTerminologyResponse::GetTerminologyResponse(
        const GetTerminologyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new GetTerminologyResponsePrivate(this), parent)
{
    setRequest(new GetTerminologyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTerminologyRequest * GetTerminologyResponse::request() const
{
    Q_D(const GetTerminologyResponse);
    return static_cast<const GetTerminologyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate GetTerminology \a response.
 */
void GetTerminologyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTerminologyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::GetTerminologyResponsePrivate
 * \brief The GetTerminologyResponsePrivate class provides private implementation for GetTerminologyResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a GetTerminologyResponsePrivate object with public implementation \a q.
 */
GetTerminologyResponsePrivate::GetTerminologyResponsePrivate(
    GetTerminologyResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate GetTerminology response element from \a xml.
 */
void GetTerminologyResponsePrivate::parseGetTerminologyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTerminologyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
