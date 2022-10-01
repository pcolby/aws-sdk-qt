// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsamplingruleresponse.h"
#include "createsamplingruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::CreateSamplingRuleResponse
 * \brief The CreateSamplingRuleResponse class provides an interace for XRay CreateSamplingRule responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::createSamplingRule
 */

/*!
 * Constructs a CreateSamplingRuleResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSamplingRuleResponse::CreateSamplingRuleResponse(
        const CreateSamplingRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new CreateSamplingRuleResponsePrivate(this), parent)
{
    setRequest(new CreateSamplingRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSamplingRuleRequest * CreateSamplingRuleResponse::request() const
{
    Q_D(const CreateSamplingRuleResponse);
    return static_cast<const CreateSamplingRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay CreateSamplingRule \a response.
 */
void CreateSamplingRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSamplingRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::CreateSamplingRuleResponsePrivate
 * \brief The CreateSamplingRuleResponsePrivate class provides private implementation for CreateSamplingRuleResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a CreateSamplingRuleResponsePrivate object with public implementation \a q.
 */
CreateSamplingRuleResponsePrivate::CreateSamplingRuleResponsePrivate(
    CreateSamplingRuleResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay CreateSamplingRule response element from \a xml.
 */
void CreateSamplingRuleResponsePrivate::parseCreateSamplingRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSamplingRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
