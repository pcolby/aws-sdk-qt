// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatasourcerequest.h"
#include "getdatasourcerequest_p.h"
#include "getdatasourceresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::GetDataSourceRequest
 * \brief The GetDataSourceRequest class provides an interface for MachineLearning GetDataSource requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::getDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
GetDataSourceRequest::GetDataSourceRequest(const GetDataSourceRequest &other)
    : MachineLearningRequest(new GetDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDataSourceRequest object.
 */
GetDataSourceRequest::GetDataSourceRequest()
    : MachineLearningRequest(new GetDataSourceRequestPrivate(MachineLearningRequest::GetDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new GetDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::GetDataSourceRequestPrivate
 * \brief The GetDataSourceRequestPrivate class provides private implementation for GetDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a GetDataSourceRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
GetDataSourceRequestPrivate::GetDataSourceRequestPrivate(
    const MachineLearningRequest::Action action, GetDataSourceRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDataSourceRequest
 * class' copy constructor.
 */
GetDataSourceRequestPrivate::GetDataSourceRequestPrivate(
    const GetDataSourceRequestPrivate &other, GetDataSourceRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
