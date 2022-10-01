// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createthesaurusresponse.h"
#include "createthesaurusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateThesaurusResponse
 * \brief The CreateThesaurusResponse class provides an interace for Kendra CreateThesaurus responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createThesaurus
 */

/*!
 * Constructs a CreateThesaurusResponse object for \a reply to \a request, with parent \a parent.
 */
CreateThesaurusResponse::CreateThesaurusResponse(
        const CreateThesaurusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new CreateThesaurusResponsePrivate(this), parent)
{
    setRequest(new CreateThesaurusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateThesaurusRequest * CreateThesaurusResponse::request() const
{
    Q_D(const CreateThesaurusResponse);
    return static_cast<const CreateThesaurusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra CreateThesaurus \a response.
 */
void CreateThesaurusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateThesaurusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::CreateThesaurusResponsePrivate
 * \brief The CreateThesaurusResponsePrivate class provides private implementation for CreateThesaurusResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateThesaurusResponsePrivate object with public implementation \a q.
 */
CreateThesaurusResponsePrivate::CreateThesaurusResponsePrivate(
    CreateThesaurusResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra CreateThesaurus response element from \a xml.
 */
void CreateThesaurusResponsePrivate::parseCreateThesaurusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateThesaurusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
