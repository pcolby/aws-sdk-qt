// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteexperimenttemplateresponse.h"
#include "deleteexperimenttemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::DeleteExperimentTemplateResponse
 * \brief The DeleteExperimentTemplateResponse class provides an interace for Fis DeleteExperimentTemplate responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
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
 * Parses a successful Fis DeleteExperimentTemplate \a response.
 */
void DeleteExperimentTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteExperimentTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::DeleteExperimentTemplateResponsePrivate
 * \brief The DeleteExperimentTemplateResponsePrivate class provides private implementation for DeleteExperimentTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a DeleteExperimentTemplateResponsePrivate object with public implementation \a q.
 */
DeleteExperimentTemplateResponsePrivate::DeleteExperimentTemplateResponsePrivate(
    DeleteExperimentTemplateResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis DeleteExperimentTemplate response element from \a xml.
 */
void DeleteExperimentTemplateResponsePrivate::parseDeleteExperimentTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteExperimentTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
