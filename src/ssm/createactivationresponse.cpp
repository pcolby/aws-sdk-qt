/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createactivationresponse.h"
#include "createactivationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::CreateActivationResponse
 *
 * \brief The CreateActivationResponse class provides an interace for SSM CreateActivation responses.
 *
 * \ingroup SSM
 *
 *  <fullname>AWS Systems Manager</fullname>
 * 
 *  AWS Systems Manager is a collection of capabilities that helps you automate management tasks such as collecting system
 *  inventory, applying operating system (OS) patches, automating the creation of Amazon Machine Images (AMIs), and
 *  configuring operating systems (OSs) and applications at scale. Systems Manager lets you remotely and securely manage the
 *  configuration of your managed instances. A <i>managed instance</i> is any Amazon EC2 instance or on-premises machine in
 *  your hybrid environment that has been configured for Systems
 * 
 *  Manager>
 * 
 *  This reference is intended to be used with the <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites and configure managed instances. For more information, see <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Systems Manager
 * 
 *  Prerequisites</a>>
 * 
 *  For information about other API actions you can perform on Amazon EC2 instances, see the <a
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API Reference</a>. For information about how to
 *  use a Query API, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API
 *  Requests</a>.
 *
 * \sa SSMClient::createActivation
 */

/*!
 * @brief  Constructs a new CreateActivationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateActivationResponse::CreateActivationResponse(
        const CreateActivationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new CreateActivationResponsePrivate(this), parent)
{
    setRequest(new CreateActivationRequest(request));
    setReply(reply);
}

const CreateActivationRequest * CreateActivationResponse::request() const
{
    Q_D(const CreateActivationResponse);
    return static_cast<const CreateActivationRequest *>(d->request);
}

/*!
 * @brief  Parse a SSM CreateActivation response.
 *
 * @param  response  Response to parse.
 */
void CreateActivationResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateActivationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateActivationResponsePrivate
 *
 * \brief Private implementation for CreateActivationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateActivationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateActivationResponse instance.
 */
CreateActivationResponsePrivate::CreateActivationResponsePrivate(
    CreateActivationResponse * const q) : SSMResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SSM CreateActivationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateActivationResponsePrivate::parseCreateActivationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateActivationResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
