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

#include "disassociatetrialcomponentresponse.h"
#include "disassociatetrialcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DisassociateTrialComponentResponse
 * \brief The DisassociateTrialComponentResponse class provides an interace for SageMaker DisassociateTrialComponent responses.
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
 * \sa SageMakerClient::disassociateTrialComponent
 */

/*!
 * Constructs a DisassociateTrialComponentResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateTrialComponentResponse::DisassociateTrialComponentResponse(
        const DisassociateTrialComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DisassociateTrialComponentResponsePrivate(this), parent)
{
    setRequest(new DisassociateTrialComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateTrialComponentRequest * DisassociateTrialComponentResponse::request() const
{
    Q_D(const DisassociateTrialComponentResponse);
    return static_cast<const DisassociateTrialComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DisassociateTrialComponent \a response.
 */
void DisassociateTrialComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateTrialComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DisassociateTrialComponentResponsePrivate
 * \brief The DisassociateTrialComponentResponsePrivate class provides private implementation for DisassociateTrialComponentResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DisassociateTrialComponentResponsePrivate object with public implementation \a q.
 */
DisassociateTrialComponentResponsePrivate::DisassociateTrialComponentResponsePrivate(
    DisassociateTrialComponentResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DisassociateTrialComponent response element from \a xml.
 */
void DisassociateTrialComponentResponsePrivate::parseDisassociateTrialComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateTrialComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
