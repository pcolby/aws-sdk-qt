// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsolutionresponse.h"
#include "createsolutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateSolutionResponse
 * \brief The CreateSolutionResponse class provides an interace for Personalize CreateSolution responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createSolution
 */

/*!
 * Constructs a CreateSolutionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSolutionResponse::CreateSolutionResponse(
        const CreateSolutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateSolutionResponsePrivate(this), parent)
{
    setRequest(new CreateSolutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSolutionRequest * CreateSolutionResponse::request() const
{
    Q_D(const CreateSolutionResponse);
    return static_cast<const CreateSolutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize CreateSolution \a response.
 */
void CreateSolutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSolutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateSolutionResponsePrivate
 * \brief The CreateSolutionResponsePrivate class provides private implementation for CreateSolutionResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateSolutionResponsePrivate object with public implementation \a q.
 */
CreateSolutionResponsePrivate::CreateSolutionResponsePrivate(
    CreateSolutionResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateSolution response element from \a xml.
 */
void CreateSolutionResponsePrivate::parseCreateSolutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSolutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
