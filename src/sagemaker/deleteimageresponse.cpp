// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteimageresponse.h"
#include "deleteimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteImageResponse
 * \brief The DeleteImageResponse class provides an interace for SageMaker DeleteImage responses.
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
 * \sa SageMakerClient::deleteImage
 */

/*!
 * Constructs a DeleteImageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteImageResponse::DeleteImageResponse(
        const DeleteImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteImageResponsePrivate(this), parent)
{
    setRequest(new DeleteImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteImageRequest * DeleteImageResponse::request() const
{
    Q_D(const DeleteImageResponse);
    return static_cast<const DeleteImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteImage \a response.
 */
void DeleteImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteImageResponsePrivate
 * \brief The DeleteImageResponsePrivate class provides private implementation for DeleteImageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteImageResponsePrivate object with public implementation \a q.
 */
DeleteImageResponsePrivate::DeleteImageResponsePrivate(
    DeleteImageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteImage response element from \a xml.
 */
void DeleteImageResponsePrivate::parseDeleteImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
