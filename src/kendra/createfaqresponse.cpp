// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfaqresponse.h"
#include "createfaqresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateFaqResponse
 * \brief The CreateFaqResponse class provides an interace for Kendra CreateFaq responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createFaq
 */

/*!
 * Constructs a CreateFaqResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFaqResponse::CreateFaqResponse(
        const CreateFaqRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new CreateFaqResponsePrivate(this), parent)
{
    setRequest(new CreateFaqRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFaqRequest * CreateFaqResponse::request() const
{
    Q_D(const CreateFaqResponse);
    return static_cast<const CreateFaqRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra CreateFaq \a response.
 */
void CreateFaqResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFaqResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::CreateFaqResponsePrivate
 * \brief The CreateFaqResponsePrivate class provides private implementation for CreateFaqResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateFaqResponsePrivate object with public implementation \a q.
 */
CreateFaqResponsePrivate::CreateFaqResponsePrivate(
    CreateFaqResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra CreateFaq response element from \a xml.
 */
void CreateFaqResponsePrivate::parseCreateFaqResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFaqResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
