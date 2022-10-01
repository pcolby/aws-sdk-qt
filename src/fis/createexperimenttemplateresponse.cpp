// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
