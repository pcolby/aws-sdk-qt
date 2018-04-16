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

#include "updateassociationresponse.h"
#include "updateassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::UpdateAssociationResponse
 *
 * \brief The UpdateAssociationResponse class provides an interace for SSM UpdateAssociation responses.
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
 * \sa SSMClient::updateAssociation
 */

/*!
 * @brief  Constructs a new UpdateAssociationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAssociationResponse::UpdateAssociationResponse(
        const UpdateAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new UpdateAssociationResponsePrivate(this), parent)
{
    setRequest(new UpdateAssociationRequest(request));
    setReply(reply);
}

const UpdateAssociationRequest * UpdateAssociationResponse::request() const
{
    Q_D(const UpdateAssociationResponse);
    return static_cast<const UpdateAssociationRequest *>(d->request);
}

/*!
 * @brief  Parse a SSM UpdateAssociation response.
 *
 * @param  response  Response to parse.
 */
void UpdateAssociationResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateAssociationResponsePrivate
 *
 * \brief Private implementation for UpdateAssociationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateAssociationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAssociationResponse instance.
 */
UpdateAssociationResponsePrivate::UpdateAssociationResponsePrivate(
    UpdateAssociationResponse * const q) : SSMResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SSM UpdateAssociationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAssociationResponsePrivate::parseUpdateAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAssociationResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
