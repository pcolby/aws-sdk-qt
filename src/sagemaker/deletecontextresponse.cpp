// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontextresponse.h"
#include "deletecontextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteContextResponse
 * \brief The DeleteContextResponse class provides an interace for SageMaker DeleteContext responses.
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
 * \sa SageMakerClient::deleteContext
 */

/*!
 * Constructs a DeleteContextResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteContextResponse::DeleteContextResponse(
        const DeleteContextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteContextResponsePrivate(this), parent)
{
    setRequest(new DeleteContextRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteContextRequest * DeleteContextResponse::request() const
{
    Q_D(const DeleteContextResponse);
    return static_cast<const DeleteContextRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteContext \a response.
 */
void DeleteContextResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteContextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteContextResponsePrivate
 * \brief The DeleteContextResponsePrivate class provides private implementation for DeleteContextResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteContextResponsePrivate object with public implementation \a q.
 */
DeleteContextResponsePrivate::DeleteContextResponsePrivate(
    DeleteContextResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteContext response element from \a xml.
 */
void DeleteContextResponsePrivate::parseDeleteContextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContextResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
