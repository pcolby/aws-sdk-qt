// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatasourcerequest.h"
#include "updatedatasourcerequest_p.h"
#include "updatedatasourceresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::UpdateDataSourceRequest
 * \brief The UpdateDataSourceRequest class provides an interface for MachineLearning UpdateDataSource requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::updateDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDataSourceRequest::UpdateDataSourceRequest(const UpdateDataSourceRequest &other)
    : MachineLearningRequest(new UpdateDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDataSourceRequest object.
 */
UpdateDataSourceRequest::UpdateDataSourceRequest()
    : MachineLearningRequest(new UpdateDataSourceRequestPrivate(MachineLearningRequest::UpdateDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::UpdateDataSourceRequestPrivate
 * \brief The UpdateDataSourceRequestPrivate class provides private implementation for UpdateDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a UpdateDataSourceRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
UpdateDataSourceRequestPrivate::UpdateDataSourceRequestPrivate(
    const MachineLearningRequest::Action action, UpdateDataSourceRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDataSourceRequest
 * class' copy constructor.
 */
UpdateDataSourceRequestPrivate::UpdateDataSourceRequestPrivate(
    const UpdateDataSourceRequestPrivate &other, UpdateDataSourceRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
