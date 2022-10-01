// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkteamresponse.h"
#include "deleteworkteamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteWorkteamResponse
 * \brief The DeleteWorkteamResponse class provides an interace for SageMaker DeleteWorkteam responses.
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
 * \sa SageMakerClient::deleteWorkteam
 */

/*!
 * Constructs a DeleteWorkteamResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkteamResponse::DeleteWorkteamResponse(
        const DeleteWorkteamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteWorkteamResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkteamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkteamRequest * DeleteWorkteamResponse::request() const
{
    Q_D(const DeleteWorkteamResponse);
    return static_cast<const DeleteWorkteamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteWorkteam \a response.
 */
void DeleteWorkteamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkteamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteWorkteamResponsePrivate
 * \brief The DeleteWorkteamResponsePrivate class provides private implementation for DeleteWorkteamResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteWorkteamResponsePrivate object with public implementation \a q.
 */
DeleteWorkteamResponsePrivate::DeleteWorkteamResponsePrivate(
    DeleteWorkteamResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteWorkteam response element from \a xml.
 */
void DeleteWorkteamResponsePrivate::parseDeleteWorkteamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkteamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
