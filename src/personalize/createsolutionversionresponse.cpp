// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsolutionversionresponse.h"
#include "createsolutionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateSolutionVersionResponse
 * \brief The CreateSolutionVersionResponse class provides an interace for Personalize CreateSolutionVersion responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createSolutionVersion
 */

/*!
 * Constructs a CreateSolutionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSolutionVersionResponse::CreateSolutionVersionResponse(
        const CreateSolutionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateSolutionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateSolutionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSolutionVersionRequest * CreateSolutionVersionResponse::request() const
{
    Q_D(const CreateSolutionVersionResponse);
    return static_cast<const CreateSolutionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize CreateSolutionVersion \a response.
 */
void CreateSolutionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSolutionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateSolutionVersionResponsePrivate
 * \brief The CreateSolutionVersionResponsePrivate class provides private implementation for CreateSolutionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateSolutionVersionResponsePrivate object with public implementation \a q.
 */
CreateSolutionVersionResponsePrivate::CreateSolutionVersionResponsePrivate(
    CreateSolutionVersionResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateSolutionVersion response element from \a xml.
 */
void CreateSolutionVersionResponsePrivate::parseCreateSolutionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSolutionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
