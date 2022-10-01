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

#include "updateworkforceresponse.h"
#include "updateworkforceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateWorkforceResponse
 * \brief The UpdateWorkforceResponse class provides an interace for SageMaker UpdateWorkforce responses.
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
 * \sa SageMakerClient::updateWorkforce
 */

/*!
 * Constructs a UpdateWorkforceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWorkforceResponse::UpdateWorkforceResponse(
        const UpdateWorkforceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateWorkforceResponsePrivate(this), parent)
{
    setRequest(new UpdateWorkforceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWorkforceRequest * UpdateWorkforceResponse::request() const
{
    Q_D(const UpdateWorkforceResponse);
    return static_cast<const UpdateWorkforceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateWorkforce \a response.
 */
void UpdateWorkforceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWorkforceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateWorkforceResponsePrivate
 * \brief The UpdateWorkforceResponsePrivate class provides private implementation for UpdateWorkforceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateWorkforceResponsePrivate object with public implementation \a q.
 */
UpdateWorkforceResponsePrivate::UpdateWorkforceResponsePrivate(
    UpdateWorkforceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateWorkforce response element from \a xml.
 */
void UpdateWorkforceResponsePrivate::parseUpdateWorkforceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWorkforceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
