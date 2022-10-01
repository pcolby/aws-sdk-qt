/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
