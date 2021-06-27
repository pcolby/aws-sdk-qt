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

#include "createexperimenttemplateresponse.h"
#include "createexperimenttemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FIS {

/*!
 * \class QtAws::FIS::CreateExperimentTemplateResponse
 * \brief The CreateExperimentTemplateResponse class provides an interace for FIS CreateExperimentTemplate responses.
 *
 * \inmodule QtAwsFIS
 *
 *  AWS Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your AWS
 *  workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">AWS Fault Injection
 *  Simulator User
 *
 * \sa FisClient::createExperimentTemplate
 */

/*!
 * Constructs a CreateExperimentTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateExperimentTemplateResponse::CreateExperimentTemplateResponse(
        const CreateExperimentTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new CreateExperimentTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateExperimentTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateExperimentTemplateRequest * CreateExperimentTemplateResponse::request() const
{
    return static_cast<const CreateExperimentTemplateRequest *>(FisResponse::request());
}

/*!
 * \reimp
 * Parses a successful FIS CreateExperimentTemplate \a response.
 */
void CreateExperimentTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateExperimentTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FIS::CreateExperimentTemplateResponsePrivate
 * \brief The CreateExperimentTemplateResponsePrivate class provides private implementation for CreateExperimentTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsFIS
 */

/*!
 * Constructs a CreateExperimentTemplateResponsePrivate object with public implementation \a q.
 */
CreateExperimentTemplateResponsePrivate::CreateExperimentTemplateResponsePrivate(
    CreateExperimentTemplateResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a FIS CreateExperimentTemplate response element from \a xml.
 */
void CreateExperimentTemplateResponsePrivate::parseCreateExperimentTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExperimentTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FIS
} // namespace QtAws
