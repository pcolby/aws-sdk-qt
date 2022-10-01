// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateexperimenttemplateresponse.h"
#include "updateexperimenttemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::UpdateExperimentTemplateResponse
 * \brief The UpdateExperimentTemplateResponse class provides an interace for Fis UpdateExperimentTemplate responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::updateExperimentTemplate
 */

/*!
 * Constructs a UpdateExperimentTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateExperimentTemplateResponse::UpdateExperimentTemplateResponse(
        const UpdateExperimentTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new UpdateExperimentTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateExperimentTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateExperimentTemplateRequest * UpdateExperimentTemplateResponse::request() const
{
    Q_D(const UpdateExperimentTemplateResponse);
    return static_cast<const UpdateExperimentTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fis UpdateExperimentTemplate \a response.
 */
void UpdateExperimentTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateExperimentTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::UpdateExperimentTemplateResponsePrivate
 * \brief The UpdateExperimentTemplateResponsePrivate class provides private implementation for UpdateExperimentTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a UpdateExperimentTemplateResponsePrivate object with public implementation \a q.
 */
UpdateExperimentTemplateResponsePrivate::UpdateExperimentTemplateResponsePrivate(
    UpdateExperimentTemplateResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis UpdateExperimentTemplate response element from \a xml.
 */
void UpdateExperimentTemplateResponsePrivate::parseUpdateExperimentTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateExperimentTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
