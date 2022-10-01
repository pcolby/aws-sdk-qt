// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteactionresponse.h"
#include "deleteactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteActionResponse
 * \brief The DeleteActionResponse class provides an interace for SageMaker DeleteAction responses.
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
 * \sa SageMakerClient::deleteAction
 */

/*!
 * Constructs a DeleteActionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteActionResponse::DeleteActionResponse(
        const DeleteActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteActionResponsePrivate(this), parent)
{
    setRequest(new DeleteActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteActionRequest * DeleteActionResponse::request() const
{
    Q_D(const DeleteActionResponse);
    return static_cast<const DeleteActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteAction \a response.
 */
void DeleteActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteActionResponsePrivate
 * \brief The DeleteActionResponsePrivate class provides private implementation for DeleteActionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteActionResponsePrivate object with public implementation \a q.
 */
DeleteActionResponsePrivate::DeleteActionResponsePrivate(
    DeleteActionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteAction response element from \a xml.
 */
void DeleteActionResponsePrivate::parseDeleteActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
