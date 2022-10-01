// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexperimenttemplateresponse.h"
#include "getexperimenttemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::GetExperimentTemplateResponse
 * \brief The GetExperimentTemplateResponse class provides an interace for Fis GetExperimentTemplate responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::getExperimentTemplate
 */

/*!
 * Constructs a GetExperimentTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetExperimentTemplateResponse::GetExperimentTemplateResponse(
        const GetExperimentTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new GetExperimentTemplateResponsePrivate(this), parent)
{
    setRequest(new GetExperimentTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExperimentTemplateRequest * GetExperimentTemplateResponse::request() const
{
    Q_D(const GetExperimentTemplateResponse);
    return static_cast<const GetExperimentTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fis GetExperimentTemplate \a response.
 */
void GetExperimentTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExperimentTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::GetExperimentTemplateResponsePrivate
 * \brief The GetExperimentTemplateResponsePrivate class provides private implementation for GetExperimentTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a GetExperimentTemplateResponsePrivate object with public implementation \a q.
 */
GetExperimentTemplateResponsePrivate::GetExperimentTemplateResponsePrivate(
    GetExperimentTemplateResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis GetExperimentTemplate response element from \a xml.
 */
void GetExperimentTemplateResponsePrivate::parseGetExperimentTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExperimentTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
