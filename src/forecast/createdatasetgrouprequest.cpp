// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetgrouprequest.h"
#include "createdatasetgrouprequest_p.h"
#include "createdatasetgroupresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateDatasetGroupRequest
 * \brief The CreateDatasetGroupRequest class provides an interface for Forecast CreateDatasetGroup requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createDatasetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDatasetGroupRequest::CreateDatasetGroupRequest(const CreateDatasetGroupRequest &other)
    : ForecastRequest(new CreateDatasetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDatasetGroupRequest object.
 */
CreateDatasetGroupRequest::CreateDatasetGroupRequest()
    : ForecastRequest(new CreateDatasetGroupRequestPrivate(ForecastRequest::CreateDatasetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDatasetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDatasetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDatasetGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateDatasetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateDatasetGroupRequestPrivate
 * \brief The CreateDatasetGroupRequestPrivate class provides private implementation for CreateDatasetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateDatasetGroupRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateDatasetGroupRequestPrivate::CreateDatasetGroupRequestPrivate(
    const ForecastRequest::Action action, CreateDatasetGroupRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDatasetGroupRequest
 * class' copy constructor.
 */
CreateDatasetGroupRequestPrivate::CreateDatasetGroupRequestPrivate(
    const CreateDatasetGroupRequestPrivate &other, CreateDatasetGroupRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
