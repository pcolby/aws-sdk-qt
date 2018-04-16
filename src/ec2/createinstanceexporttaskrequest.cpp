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

#include "createinstanceexporttaskrequest.h"
#include "createinstanceexporttaskrequest_p.h"
#include "createinstanceexporttaskresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateInstanceExportTaskRequest
 *
 * \brief The CreateInstanceExportTaskRequest class encapsulates EC2 CreateInstanceExportTask requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::createInstanceExportTask
 */

/*!
 * @brief  Constructs a new CreateInstanceExportTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateInstanceExportTaskRequest::CreateInstanceExportTaskRequest(const CreateInstanceExportTaskRequest &other)
    : EC2Request(new CreateInstanceExportTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateInstanceExportTaskRequest object.
 */
CreateInstanceExportTaskRequest::CreateInstanceExportTaskRequest()
    : EC2Request(new CreateInstanceExportTaskRequestPrivate(EC2Request::CreateInstanceExportTaskAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInstanceExportTaskRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateInstanceExportTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateInstanceExportTaskResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateInstanceExportTaskRequest::response(QNetworkReply * const reply) const
{
    return new CreateInstanceExportTaskResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateInstanceExportTaskRequestPrivate
 *
 * @brief  Private implementation for CreateInstanceExportTaskRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateInstanceExportTaskRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateInstanceExportTaskRequest instance.
 */
CreateInstanceExportTaskRequestPrivate::CreateInstanceExportTaskRequestPrivate(
    const EC2Request::Action action, CreateInstanceExportTaskRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateInstanceExportTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateInstanceExportTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateInstanceExportTaskRequest instance.
 */
CreateInstanceExportTaskRequestPrivate::CreateInstanceExportTaskRequestPrivate(
    const CreateInstanceExportTaskRequestPrivate &other, CreateInstanceExportTaskRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
