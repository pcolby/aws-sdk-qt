// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteexperienceresponse.h"
#include "deleteexperienceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteExperienceResponse
 * \brief The DeleteExperienceResponse class provides an interace for Kendra DeleteExperience responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteExperience
 */

/*!
 * Constructs a DeleteExperienceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteExperienceResponse::DeleteExperienceResponse(
        const DeleteExperienceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DeleteExperienceResponsePrivate(this), parent)
{
    setRequest(new DeleteExperienceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteExperienceRequest * DeleteExperienceResponse::request() const
{
    Q_D(const DeleteExperienceResponse);
    return static_cast<const DeleteExperienceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DeleteExperience \a response.
 */
void DeleteExperienceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteExperienceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DeleteExperienceResponsePrivate
 * \brief The DeleteExperienceResponsePrivate class provides private implementation for DeleteExperienceResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteExperienceResponsePrivate object with public implementation \a q.
 */
DeleteExperienceResponsePrivate::DeleteExperienceResponsePrivate(
    DeleteExperienceResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DeleteExperience response element from \a xml.
 */
void DeleteExperienceResponsePrivate::parseDeleteExperienceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteExperienceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
