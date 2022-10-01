// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatethesaurusresponse.h"
#include "updatethesaurusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateThesaurusResponse
 * \brief The UpdateThesaurusResponse class provides an interace for Kendra UpdateThesaurus responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateThesaurus
 */

/*!
 * Constructs a UpdateThesaurusResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateThesaurusResponse::UpdateThesaurusResponse(
        const UpdateThesaurusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new UpdateThesaurusResponsePrivate(this), parent)
{
    setRequest(new UpdateThesaurusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateThesaurusRequest * UpdateThesaurusResponse::request() const
{
    Q_D(const UpdateThesaurusResponse);
    return static_cast<const UpdateThesaurusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra UpdateThesaurus \a response.
 */
void UpdateThesaurusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateThesaurusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::UpdateThesaurusResponsePrivate
 * \brief The UpdateThesaurusResponsePrivate class provides private implementation for UpdateThesaurusResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateThesaurusResponsePrivate object with public implementation \a q.
 */
UpdateThesaurusResponsePrivate::UpdateThesaurusResponsePrivate(
    UpdateThesaurusResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra UpdateThesaurus response element from \a xml.
 */
void UpdateThesaurusResponsePrivate::parseUpdateThesaurusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThesaurusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
