// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinstancepatchesresponse.h"
#include "describeinstancepatchesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::DescribeInstancePatchesResponse
 * \brief The DescribeInstancePatchesResponse class provides an interace for Ssm DescribeInstancePatches responses.
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
 * \sa SsmClient::describeInstancePatches
 */

/*!
 * Constructs a DescribeInstancePatchesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInstancePatchesResponse::DescribeInstancePatchesResponse(
        const DescribeInstancePatchesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new DescribeInstancePatchesResponsePrivate(this), parent)
{
    setRequest(new DescribeInstancePatchesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInstancePatchesRequest * DescribeInstancePatchesResponse::request() const
{
    Q_D(const DescribeInstancePatchesResponse);
    return static_cast<const DescribeInstancePatchesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ssm DescribeInstancePatches \a response.
 */
void DescribeInstancePatchesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeInstancePatchesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ssm::DescribeInstancePatchesResponsePrivate
 * \brief The DescribeInstancePatchesResponsePrivate class provides private implementation for DescribeInstancePatchesResponse.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a DescribeInstancePatchesResponsePrivate object with public implementation \a q.
 */
DescribeInstancePatchesResponsePrivate::DescribeInstancePatchesResponsePrivate(
    DescribeInstancePatchesResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a Ssm DescribeInstancePatches response element from \a xml.
 */
void DescribeInstancePatchesResponsePrivate::parseDescribeInstancePatchesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstancePatchesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ssm
} // namespace QtAws
