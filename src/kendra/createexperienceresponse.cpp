// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createexperienceresponse.h"
#include "createexperienceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateExperienceResponse
 * \brief The CreateExperienceResponse class provides an interace for Kendra CreateExperience responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createExperience
 */

/*!
 * Constructs a CreateExperienceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateExperienceResponse::CreateExperienceResponse(
        const CreateExperienceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new CreateExperienceResponsePrivate(this), parent)
{
    setRequest(new CreateExperienceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateExperienceRequest * CreateExperienceResponse::request() const
{
    Q_D(const CreateExperienceResponse);
    return static_cast<const CreateExperienceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra CreateExperience \a response.
 */
void CreateExperienceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateExperienceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::CreateExperienceResponsePrivate
 * \brief The CreateExperienceResponsePrivate class provides private implementation for CreateExperienceResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateExperienceResponsePrivate object with public implementation \a q.
 */
CreateExperienceResponsePrivate::CreateExperienceResponsePrivate(
    CreateExperienceResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra CreateExperience response element from \a xml.
 */
void CreateExperienceResponsePrivate::parseCreateExperienceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExperienceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
