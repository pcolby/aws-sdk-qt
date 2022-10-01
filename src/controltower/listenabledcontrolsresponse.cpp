// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listenabledcontrolsresponse.h"
#include "listenabledcontrolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ControlTower {

/*!
 * \class QtAws::ControlTower::ListEnabledControlsResponse
 * \brief The ListEnabledControlsResponse class provides an interace for ControlTower ListEnabledControls responses.
 *
 * \inmodule QtAwsControlTower
 *
 *  These interfaces allow you to apply the AWS library of pre-defined <i>controls</i> to your organizational units,
 *  programmatically. In this context, controls are the same as AWS Control Tower
 * 
 *  guardrails>
 * 
 *  To call these APIs, you'll need to
 * 
 *  know> <ul> <li>
 * 
 *  the <code>ControlARN</code> for the control--that is, the guardrail--you are
 * 
 *  targeting> </li> <li>
 * 
 *  and the ARN associated with the target organizational unit
 * 
 *  (OU)> </li> </ul>
 * 
 *  <b>To get the <code>ControlARN</code> for your AWS Control Tower guardrail:</b>
 * 
 *  </p
 * 
 *  The <code>ControlARN</code> contains the control name which is specified in each guardrail. For a list of control names
 *  for <i>Strongly recommended</i> and <i>Elective</i> guardrails, see <a
 *  href="https://docs.aws.amazon.com/controltower/latest/userguide/control-identifiers.html.html">Resource identifiers for
 *  APIs and guardrails</a> in the <a
 *  href="https://docs.aws.amazon.com/controltower/latest/userguide/automating-tasks.html">Automating tasks section</a> of
 *  the AWS Control Tower User Guide. Remember that <i>Mandatory</i> guardrails cannot be added or
 * 
 *  removed> <note>
 * 
 *  <b>ARN format:</b> <code>arn:aws:controltower:{REGION}::control/{CONTROL_NAME}</code>
 * 
 *  </p
 * 
 *  <b>Example:</b>
 * 
 *  </p
 * 
 *  <code>arn:aws:controltower:us-west-2::control/AWS-GR_AUTOSCALING_LAUNCH_CONFIG_PUBLIC_IP_DISABLED</code>
 * 
 *  </p </note>
 * 
 *  <b>To get the ARN for an OU:</b>
 * 
 *  </p
 * 
 *  In the AWS Organizations console, you can find the ARN for the OU on the <b>Organizational unit details</b> page
 *  associated with that
 * 
 *  OU> <note>
 * 
 *  <b>OU ARN format:</b>
 * 
 *  </p
 * 
 *  <code>arn:${Partition}:organizations::${MasterAccountId}:ou/o-${OrganizationId}/ou-${OrganizationalUnitId}</code>
 * 
 *  </p </note> <p class="title"> <b>Details and examples</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/controltower/latest/userguide/control-identifiers.html">List of resource
 *  identifiers for APIs and guardrails</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/controltower/latest/userguide/guardrail-api-examples-short.html">Guardrail API
 *  examples (CLI)</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/controltower/latest/userguide/enable-controls.html">Enable controls with AWS
 *  CloudFormation</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/controltower/latest/userguide/creating-resources-with-cloudformation.html">Creating
 *  AWS Control Tower resources with AWS CloudFormation</a>
 * 
 *  </p </li> </ul>
 * 
 *  To view the open source resource repository on GitHub, see <a
 *  href="https://github.com/aws-cloudformation/aws-cloudformation-resource-providers-controltower">aws-cloudformation/aws-cloudformation-resource-providers-controltower</a>
 * 
 *  </p
 * 
 *  <b>Recording API Requests</b>
 * 
 *  </p
 * 
 *  AWS Control Tower supports AWS CloudTrail, a service that records AWS API calls for your AWS account and delivers log
 *  files to an Amazon S3 bucket. By using information collected by CloudTrail, you can determine which requests the AWS
 *  Control Tower service received, who made the request and when, and so on. For more about AWS Control Tower and its
 *  support for CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/controltower/latest/userguide/logging-using-cloudtrail.html">Logging AWS Control Tower
 *  Actions with AWS CloudTrail</a> in the AWS Control Tower User Guide. To learn more about CloudTrail, including how to
 *  turn it on and find your log files, see the AWS CloudTrail User
 *
 * \sa ControlTowerClient::listEnabledControls
 */

/*!
 * Constructs a ListEnabledControlsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEnabledControlsResponse::ListEnabledControlsResponse(
        const ListEnabledControlsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ControlTowerResponse(new ListEnabledControlsResponsePrivate(this), parent)
{
    setRequest(new ListEnabledControlsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEnabledControlsRequest * ListEnabledControlsResponse::request() const
{
    Q_D(const ListEnabledControlsResponse);
    return static_cast<const ListEnabledControlsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ControlTower ListEnabledControls \a response.
 */
void ListEnabledControlsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEnabledControlsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ControlTower::ListEnabledControlsResponsePrivate
 * \brief The ListEnabledControlsResponsePrivate class provides private implementation for ListEnabledControlsResponse.
 * \internal
 *
 * \inmodule QtAwsControlTower
 */

/*!
 * Constructs a ListEnabledControlsResponsePrivate object with public implementation \a q.
 */
ListEnabledControlsResponsePrivate::ListEnabledControlsResponsePrivate(
    ListEnabledControlsResponse * const q) : ControlTowerResponsePrivate(q)
{

}

/*!
 * Parses a ControlTower ListEnabledControls response element from \a xml.
 */
void ListEnabledControlsResponsePrivate::parseListEnabledControlsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEnabledControlsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ControlTower
} // namespace QtAws
