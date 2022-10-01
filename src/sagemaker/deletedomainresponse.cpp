// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedomainresponse.h"
#include "deletedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteDomainResponse
 * \brief The DeleteDomainResponse class provides an interace for SageMaker DeleteDomain responses.
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
 * \sa SageMakerClient::deleteDomain
 */

/*!
 * Constructs a DeleteDomainResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDomainResponse::DeleteDomainResponse(
        const DeleteDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteDomainResponsePrivate(this), parent)
{
    setRequest(new DeleteDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDomainRequest * DeleteDomainResponse::request() const
{
    Q_D(const DeleteDomainResponse);
    return static_cast<const DeleteDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteDomain \a response.
 */
void DeleteDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteDomainResponsePrivate
 * \brief The DeleteDomainResponsePrivate class provides private implementation for DeleteDomainResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteDomainResponsePrivate object with public implementation \a q.
 */
DeleteDomainResponsePrivate::DeleteDomainResponsePrivate(
    DeleteDomainResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteDomain response element from \a xml.
 */
void DeleteDomainResponsePrivate::parseDeleteDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
