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

#include "deleteexperimenttemplateresponse.h"
#include "deleteexperimenttemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FIS {

/*!
 * \class QtAws::FIS::DeleteExperimentTemplateResponse
 * \brief The DeleteExperimentTemplateResponse class provides an interace for FIS DeleteExperimentTemplate responses.
 *
 * \inmodule QtAwsFIS
 *
 *  AWS Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your AWS
 *  workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">AWS Fault Injection
 *  Simulator User
 *
 * \sa FisClient::deleteExperimentTemplate
 */

/*!
 * Constructs a DeleteExperimentTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteExperimentTemplateResponse::DeleteExperimentTemplateResponse(
        const DeleteExperimentTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new DeleteExperimentTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteExperimentTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteExperimentTemplateRequest * DeleteExperimentTemplateResponse::request() const
{
    Q_D(const DeleteExperimentTemplateResponse);
    return static_cast<const DeleteExperimentTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FIS DeleteExperimentTemplate \a response.
 */
void DeleteExperimentTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteExperimentTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FIS::DeleteExperimentTemplateResponsePrivate
 * \brief The DeleteExperimentTemplateResponsePrivate class provides private implementation for DeleteExperimentTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsFIS
 */

/*!
 * Constructs a DeleteExperimentTemplateResponsePrivate object with public implementation \a q.
 */
DeleteExperimentTemplateResponsePrivate::DeleteExperimentTemplateResponsePrivate(
    DeleteExperimentTemplateResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a FIS DeleteExperimentTemplate response element from \a xml.
 */
void DeleteExperimentTemplateResponsePrivate::parseDeleteExperimentTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteExperimentTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FIS
} // namespace QtAws
