// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerdefaultpatchbaselineresponse.h"
#include "registerdefaultpatchbaselineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::RegisterDefaultPatchBaselineResponse
 * \brief The RegisterDefaultPatchBaselineResponse class provides an interace for Ssm RegisterDefaultPatchBaseline responses.
 *
 * \inmodule QtAwsSsm
 *
 *  Amazon Web Services Systems Manager is a collection of capabilities to help you manage your applications and
 *  infrastructure running in the Amazon Web Services Cloud;. Systems Manager simplifies application and resource
 *  management, shortens the time to detect and resolve operational problems, and helps you manage your Amazon Web Services
 *  resources securely at
 * 
 *  scale>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web Services Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up Amazon
 *  Web Services Systems
 * 
 *  Manager</a>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API operations you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident Manager API
 *
 * \sa SsmClient::registerDefaultPatchBaseline
 */

/*!
 * Constructs a RegisterDefaultPatchBaselineResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterDefaultPatchBaselineResponse::RegisterDefaultPatchBaselineResponse(
        const RegisterDefaultPatchBaselineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new RegisterDefaultPatchBaselineResponsePrivate(this), parent)
{
    setRequest(new RegisterDefaultPatchBaselineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterDefaultPatchBaselineRequest * RegisterDefaultPatchBaselineResponse::request() const
{
    Q_D(const RegisterDefaultPatchBaselineResponse);
    return static_cast<const RegisterDefaultPatchBaselineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ssm RegisterDefaultPatchBaseline \a response.
 */
void RegisterDefaultPatchBaselineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterDefaultPatchBaselineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ssm::RegisterDefaultPatchBaselineResponsePrivate
 * \brief The RegisterDefaultPatchBaselineResponsePrivate class provides private implementation for RegisterDefaultPatchBaselineResponse.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a RegisterDefaultPatchBaselineResponsePrivate object with public implementation \a q.
 */
RegisterDefaultPatchBaselineResponsePrivate::RegisterDefaultPatchBaselineResponsePrivate(
    RegisterDefaultPatchBaselineResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a Ssm RegisterDefaultPatchBaseline response element from \a xml.
 */
void RegisterDefaultPatchBaselineResponsePrivate::parseRegisterDefaultPatchBaselineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterDefaultPatchBaselineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ssm
} // namespace QtAws
