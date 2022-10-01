// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecoderepositoryresponse.h"
#include "updatecoderepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateCodeRepositoryResponse
 * \brief The UpdateCodeRepositoryResponse class provides an interace for SageMaker UpdateCodeRepository responses.
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
 * \sa SageMakerClient::updateCodeRepository
 */

/*!
 * Constructs a UpdateCodeRepositoryResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCodeRepositoryResponse::UpdateCodeRepositoryResponse(
        const UpdateCodeRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateCodeRepositoryResponsePrivate(this), parent)
{
    setRequest(new UpdateCodeRepositoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCodeRepositoryRequest * UpdateCodeRepositoryResponse::request() const
{
    Q_D(const UpdateCodeRepositoryResponse);
    return static_cast<const UpdateCodeRepositoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateCodeRepository \a response.
 */
void UpdateCodeRepositoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCodeRepositoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateCodeRepositoryResponsePrivate
 * \brief The UpdateCodeRepositoryResponsePrivate class provides private implementation for UpdateCodeRepositoryResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateCodeRepositoryResponsePrivate object with public implementation \a q.
 */
UpdateCodeRepositoryResponsePrivate::UpdateCodeRepositoryResponsePrivate(
    UpdateCodeRepositoryResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateCodeRepository response element from \a xml.
 */
void UpdateCodeRepositoryResponsePrivate::parseUpdateCodeRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCodeRepositoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
