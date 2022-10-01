// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkforceresponse.h"
#include "deleteworkforceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteWorkforceResponse
 * \brief The DeleteWorkforceResponse class provides an interace for SageMaker DeleteWorkforce responses.
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
 * \sa SageMakerClient::deleteWorkforce
 */

/*!
 * Constructs a DeleteWorkforceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkforceResponse::DeleteWorkforceResponse(
        const DeleteWorkforceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteWorkforceResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkforceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkforceRequest * DeleteWorkforceResponse::request() const
{
    Q_D(const DeleteWorkforceResponse);
    return static_cast<const DeleteWorkforceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteWorkforce \a response.
 */
void DeleteWorkforceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkforceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteWorkforceResponsePrivate
 * \brief The DeleteWorkforceResponsePrivate class provides private implementation for DeleteWorkforceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteWorkforceResponsePrivate object with public implementation \a q.
 */
DeleteWorkforceResponsePrivate::DeleteWorkforceResponsePrivate(
    DeleteWorkforceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteWorkforce response element from \a xml.
 */
void DeleteWorkforceResponsePrivate::parseDeleteWorkforceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkforceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
