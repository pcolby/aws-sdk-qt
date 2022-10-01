// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletethesaurusresponse.h"
#include "deletethesaurusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteThesaurusResponse
 * \brief The DeleteThesaurusResponse class provides an interace for Kendra DeleteThesaurus responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteThesaurus
 */

/*!
 * Constructs a DeleteThesaurusResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteThesaurusResponse::DeleteThesaurusResponse(
        const DeleteThesaurusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DeleteThesaurusResponsePrivate(this), parent)
{
    setRequest(new DeleteThesaurusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteThesaurusRequest * DeleteThesaurusResponse::request() const
{
    Q_D(const DeleteThesaurusResponse);
    return static_cast<const DeleteThesaurusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DeleteThesaurus \a response.
 */
void DeleteThesaurusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteThesaurusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DeleteThesaurusResponsePrivate
 * \brief The DeleteThesaurusResponsePrivate class provides private implementation for DeleteThesaurusResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteThesaurusResponsePrivate object with public implementation \a q.
 */
DeleteThesaurusResponsePrivate::DeleteThesaurusResponsePrivate(
    DeleteThesaurusResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DeleteThesaurus response element from \a xml.
 */
void DeleteThesaurusResponsePrivate::parseDeleteThesaurusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThesaurusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
