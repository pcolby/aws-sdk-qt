// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappimageconfigresponse.h"
#include "deleteappimageconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteAppImageConfigResponse
 * \brief The DeleteAppImageConfigResponse class provides an interace for SageMaker DeleteAppImageConfig responses.
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
 * \sa SageMakerClient::deleteAppImageConfig
 */

/*!
 * Constructs a DeleteAppImageConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAppImageConfigResponse::DeleteAppImageConfigResponse(
        const DeleteAppImageConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteAppImageConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteAppImageConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAppImageConfigRequest * DeleteAppImageConfigResponse::request() const
{
    Q_D(const DeleteAppImageConfigResponse);
    return static_cast<const DeleteAppImageConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteAppImageConfig \a response.
 */
void DeleteAppImageConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAppImageConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteAppImageConfigResponsePrivate
 * \brief The DeleteAppImageConfigResponsePrivate class provides private implementation for DeleteAppImageConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteAppImageConfigResponsePrivate object with public implementation \a q.
 */
DeleteAppImageConfigResponsePrivate::DeleteAppImageConfigResponsePrivate(
    DeleteAppImageConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteAppImageConfig response element from \a xml.
 */
void DeleteAppImageConfigResponsePrivate::parseDeleteAppImageConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAppImageConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
