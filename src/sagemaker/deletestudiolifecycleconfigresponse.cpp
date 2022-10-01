// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestudiolifecycleconfigresponse.h"
#include "deletestudiolifecycleconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteStudioLifecycleConfigResponse
 * \brief The DeleteStudioLifecycleConfigResponse class provides an interace for SageMaker DeleteStudioLifecycleConfig responses.
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
 * \sa SageMakerClient::deleteStudioLifecycleConfig
 */

/*!
 * Constructs a DeleteStudioLifecycleConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStudioLifecycleConfigResponse::DeleteStudioLifecycleConfigResponse(
        const DeleteStudioLifecycleConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteStudioLifecycleConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteStudioLifecycleConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStudioLifecycleConfigRequest * DeleteStudioLifecycleConfigResponse::request() const
{
    Q_D(const DeleteStudioLifecycleConfigResponse);
    return static_cast<const DeleteStudioLifecycleConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteStudioLifecycleConfig \a response.
 */
void DeleteStudioLifecycleConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStudioLifecycleConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteStudioLifecycleConfigResponsePrivate
 * \brief The DeleteStudioLifecycleConfigResponsePrivate class provides private implementation for DeleteStudioLifecycleConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteStudioLifecycleConfigResponsePrivate object with public implementation \a q.
 */
DeleteStudioLifecycleConfigResponsePrivate::DeleteStudioLifecycleConfigResponsePrivate(
    DeleteStudioLifecycleConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteStudioLifecycleConfig response element from \a xml.
 */
void DeleteStudioLifecycleConfigResponsePrivate::parseDeleteStudioLifecycleConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStudioLifecycleConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
