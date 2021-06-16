/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateservicesettingresponse.h"
#include "updateservicesettingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::UpdateServiceSettingResponse
 * \brief The UpdateServiceSettingResponse class provides an interace for SSM UpdateServiceSetting responses.
 *
 * \inmodule QtAwsSSM
 *
 *  <fullname>AWS Systems Manager</fullname>
 * 
 *  AWS Systems Manager is a collection of capabilities that helps you automate management tasks such as collecting system
 *  inventory, applying operating system (OS) patches, automating the creation of Amazon Machine Images (AMIs), and
 *  configuring operating systems (OSs) and applications at scale. Systems Manager lets you remotely and securely manage the
 *  configuration of your managed instances. A <i>managed instance</i> is any Amazon Elastic Compute Cloud instance (EC2
 *  instance), or any on-premises server or virtual machine (VM) in your hybrid environment that has been configured for
 *  Systems
 * 
 *  Manager>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites and configure managed instances. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up AWS
 *  Systems Manager</a> in the <i>AWS Systems Manager User
 * 
 *  Guide</i>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API actions you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AWS AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AWS AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AWS AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AWS Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">AWS Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">AWS Incident Manager API
 *
 * \sa SsmClient::updateServiceSetting
 */

/*!
 * Constructs a UpdateServiceSettingResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServiceSettingResponse::UpdateServiceSettingResponse(
        const UpdateServiceSettingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new UpdateServiceSettingResponsePrivate(this), parent)
{
    setRequest(new UpdateServiceSettingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServiceSettingRequest * UpdateServiceSettingResponse::request() const
{
    Q_D(const UpdateServiceSettingResponse);
    return static_cast<const UpdateServiceSettingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSM UpdateServiceSetting \a response.
 */
void UpdateServiceSettingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServiceSettingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSM::UpdateServiceSettingResponsePrivate
 * \brief The UpdateServiceSettingResponsePrivate class provides private implementation for UpdateServiceSettingResponse.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a UpdateServiceSettingResponsePrivate object with public implementation \a q.
 */
UpdateServiceSettingResponsePrivate::UpdateServiceSettingResponsePrivate(
    UpdateServiceSettingResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a SSM UpdateServiceSetting response element from \a xml.
 */
void UpdateServiceSettingResponsePrivate::parseUpdateServiceSettingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServiceSettingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSM
} // namespace QtAws
