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
namespace Fis {

/*!
 * \class QtAws::Fis::CreateExperimentTemplateResponse
 * \brief The CreateExperimentTemplateResponse class provides an interace for Fis CreateExperimentTemplate responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
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
    Q_D(const CreateExperimentTemplateResponse);
    return static_cast<const CreateExperimentTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fis CreateExperimentTemplate \a response.
 */
void CreateExperimentTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateExperimentTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::CreateExperimentTemplateResponsePrivate
 * \brief The CreateExperimentTemplateResponsePrivate class provides private implementation for CreateExperimentTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a CreateExperimentTemplateResponsePrivate object with public implementation \a q.
 */
CreateExperimentTemplateResponsePrivate::CreateExperimentTemplateResponsePrivate(
    CreateExperimentTemplateResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis CreateExperimentTemplate response element from \a xml.
 */
void CreateExperimentTemplateResponsePrivate::parseCreateExperimentTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExperimentTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
