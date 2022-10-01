// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasourcerequest.h"
#include "deletedatasourcerequest_p.h"
#include "deletedatasourceresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DeleteDataSourceRequest
 * \brief The DeleteDataSourceRequest class provides an interface for MachineLearning DeleteDataSource requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::deleteDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDataSourceRequest::DeleteDataSourceRequest(const DeleteDataSourceRequest &other)
    : MachineLearningRequest(new DeleteDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDataSourceRequest object.
 */
DeleteDataSourceRequest::DeleteDataSourceRequest()
    : MachineLearningRequest(new DeleteDataSourceRequestPrivate(MachineLearningRequest::DeleteDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::DeleteDataSourceRequestPrivate
 * \brief The DeleteDataSourceRequestPrivate class provides private implementation for DeleteDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DeleteDataSourceRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
DeleteDataSourceRequestPrivate::DeleteDataSourceRequestPrivate(
    const MachineLearningRequest::Action action, DeleteDataSourceRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDataSourceRequest
 * class' copy constructor.
 */
DeleteDataSourceRequestPrivate::DeleteDataSourceRequestPrivate(
    const DeleteDataSourceRequestPrivate &other, DeleteDataSourceRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
