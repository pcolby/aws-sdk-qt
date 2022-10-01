// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createparalleldataresponse.h"
#include "createparalleldataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::CreateParallelDataResponse
 * \brief The CreateParallelDataResponse class provides an interace for Translate CreateParallelData responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::createParallelData
 */

/*!
 * Constructs a CreateParallelDataResponse object for \a reply to \a request, with parent \a parent.
 */
CreateParallelDataResponse::CreateParallelDataResponse(
        const CreateParallelDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new CreateParallelDataResponsePrivate(this), parent)
{
    setRequest(new CreateParallelDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateParallelDataRequest * CreateParallelDataResponse::request() const
{
    Q_D(const CreateParallelDataResponse);
    return static_cast<const CreateParallelDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate CreateParallelData \a response.
 */
void CreateParallelDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateParallelDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::CreateParallelDataResponsePrivate
 * \brief The CreateParallelDataResponsePrivate class provides private implementation for CreateParallelDataResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a CreateParallelDataResponsePrivate object with public implementation \a q.
 */
CreateParallelDataResponsePrivate::CreateParallelDataResponsePrivate(
    CreateParallelDataResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate CreateParallelData response element from \a xml.
 */
void CreateParallelDataResponsePrivate::parseCreateParallelDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateParallelDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
