// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkteamresponse.h"
#include "createworkteamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateWorkteamResponse
 * \brief The CreateWorkteamResponse class provides an interace for SageMaker CreateWorkteam responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::createWorkteam
 */

/*!
 * Constructs a CreateWorkteamResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkteamResponse::CreateWorkteamResponse(
        const CreateWorkteamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateWorkteamResponsePrivate(this), parent)
{
    setRequest(new CreateWorkteamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkteamRequest * CreateWorkteamResponse::request() const
{
    Q_D(const CreateWorkteamResponse);
    return static_cast<const CreateWorkteamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateWorkteam \a response.
 */
void CreateWorkteamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkteamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateWorkteamResponsePrivate
 * \brief The CreateWorkteamResponsePrivate class provides private implementation for CreateWorkteamResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateWorkteamResponsePrivate object with public implementation \a q.
 */
CreateWorkteamResponsePrivate::CreateWorkteamResponsePrivate(
    CreateWorkteamResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateWorkteam response element from \a xml.
 */
void CreateWorkteamResponsePrivate::parseCreateWorkteamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkteamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
