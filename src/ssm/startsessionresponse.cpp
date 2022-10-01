// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startsessionresponse.h"
#include "startsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::StartSessionResponse
 * \brief The StartSessionResponse class provides an interace for Ssm StartSession responses.
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
 * \sa SsmClient::startSession
 */

/*!
 * Constructs a StartSessionResponse object for \a reply to \a request, with parent \a parent.
 */
StartSessionResponse::StartSessionResponse(
        const StartSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new StartSessionResponsePrivate(this), parent)
{
    setRequest(new StartSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartSessionRequest * StartSessionResponse::request() const
{
    Q_D(const StartSessionResponse);
    return static_cast<const StartSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ssm StartSession \a response.
 */
void StartSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ssm::StartSessionResponsePrivate
 * \brief The StartSessionResponsePrivate class provides private implementation for StartSessionResponse.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a StartSessionResponsePrivate object with public implementation \a q.
 */
StartSessionResponsePrivate::StartSessionResponsePrivate(
    StartSessionResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a Ssm StartSession response element from \a xml.
 */
void StartSessionResponsePrivate::parseStartSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ssm
} // namespace QtAws
