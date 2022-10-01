// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createopsitemresponse.h"
#include "createopsitemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::CreateOpsItemResponse
 * \brief The CreateOpsItemResponse class provides an interace for Ssm CreateOpsItem responses.
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
 * \sa SsmClient::createOpsItem
 */

/*!
 * Constructs a CreateOpsItemResponse object for \a reply to \a request, with parent \a parent.
 */
CreateOpsItemResponse::CreateOpsItemResponse(
        const CreateOpsItemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new CreateOpsItemResponsePrivate(this), parent)
{
    setRequest(new CreateOpsItemRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateOpsItemRequest * CreateOpsItemResponse::request() const
{
    Q_D(const CreateOpsItemResponse);
    return static_cast<const CreateOpsItemRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ssm CreateOpsItem \a response.
 */
void CreateOpsItemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateOpsItemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ssm::CreateOpsItemResponsePrivate
 * \brief The CreateOpsItemResponsePrivate class provides private implementation for CreateOpsItemResponse.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a CreateOpsItemResponsePrivate object with public implementation \a q.
 */
CreateOpsItemResponsePrivate::CreateOpsItemResponsePrivate(
    CreateOpsItemResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a Ssm CreateOpsItem response element from \a xml.
 */
void CreateOpsItemResponsePrivate::parseCreateOpsItemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOpsItemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ssm
} // namespace QtAws
