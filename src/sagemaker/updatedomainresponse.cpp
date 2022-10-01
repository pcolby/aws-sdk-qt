// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainresponse.h"
#include "updatedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateDomainResponse
 * \brief The UpdateDomainResponse class provides an interace for SageMaker UpdateDomain responses.
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
 * \sa SageMakerClient::updateDomain
 */

/*!
 * Constructs a UpdateDomainResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainResponse::UpdateDomainResponse(
        const UpdateDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateDomainResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainRequest * UpdateDomainResponse::request() const
{
    Q_D(const UpdateDomainResponse);
    return static_cast<const UpdateDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateDomain \a response.
 */
void UpdateDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateDomainResponsePrivate
 * \brief The UpdateDomainResponsePrivate class provides private implementation for UpdateDomainResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateDomainResponsePrivate object with public implementation \a q.
 */
UpdateDomainResponsePrivate::UpdateDomainResponsePrivate(
    UpdateDomainResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateDomain response element from \a xml.
 */
void UpdateDomainResponsePrivate::parseUpdateDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
