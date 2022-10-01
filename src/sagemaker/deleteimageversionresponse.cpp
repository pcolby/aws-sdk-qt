// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteimageversionresponse.h"
#include "deleteimageversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteImageVersionResponse
 * \brief The DeleteImageVersionResponse class provides an interace for SageMaker DeleteImageVersion responses.
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
 * \sa SageMakerClient::deleteImageVersion
 */

/*!
 * Constructs a DeleteImageVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteImageVersionResponse::DeleteImageVersionResponse(
        const DeleteImageVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteImageVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteImageVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteImageVersionRequest * DeleteImageVersionResponse::request() const
{
    Q_D(const DeleteImageVersionResponse);
    return static_cast<const DeleteImageVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteImageVersion \a response.
 */
void DeleteImageVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteImageVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteImageVersionResponsePrivate
 * \brief The DeleteImageVersionResponsePrivate class provides private implementation for DeleteImageVersionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteImageVersionResponsePrivate object with public implementation \a q.
 */
DeleteImageVersionResponsePrivate::DeleteImageVersionResponsePrivate(
    DeleteImageVersionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteImageVersion response element from \a xml.
 */
void DeleteImageVersionResponsePrivate::parseDeleteImageVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteImageVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
