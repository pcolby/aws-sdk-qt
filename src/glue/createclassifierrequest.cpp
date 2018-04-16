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

#include "createclassifierrequest.h"
#include "createclassifierrequest_p.h"
#include "createclassifierresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateClassifierRequest
 *
 * \brief The CreateClassifierRequest class encapsulates Glue CreateClassifier requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createClassifier
 */

/*!
 * @brief  Constructs a new CreateClassifierRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateClassifierRequest::CreateClassifierRequest(const CreateClassifierRequest &other)
    : GlueRequest(new CreateClassifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateClassifierRequest object.
 */
CreateClassifierRequest::CreateClassifierRequest()
    : GlueRequest(new CreateClassifierRequestPrivate(GlueRequest::CreateClassifierAction, this))
{

}

/*!
 * \reimp
 */
bool CreateClassifierRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateClassifierResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateClassifierResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateClassifierRequest::response(QNetworkReply * const reply) const
{
    return new CreateClassifierResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateClassifierRequestPrivate
 *
 * @brief  Private implementation for CreateClassifierRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateClassifierRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public CreateClassifierRequest instance.
 */
CreateClassifierRequestPrivate::CreateClassifierRequestPrivate(
    const GlueRequest::Action action, CreateClassifierRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateClassifierRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateClassifierRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateClassifierRequest instance.
 */
CreateClassifierRequestPrivate::CreateClassifierRequestPrivate(
    const CreateClassifierRequestPrivate &other, CreateClassifierRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
