// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createharvestjobrequest.h"
#include "createharvestjobrequest_p.h"
#include "createharvestjobresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::CreateHarvestJobRequest
 * \brief The CreateHarvestJobRequest class provides an interface for MediaPackage CreateHarvestJob requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::createHarvestJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHarvestJobRequest::CreateHarvestJobRequest(const CreateHarvestJobRequest &other)
    : MediaPackageRequest(new CreateHarvestJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHarvestJobRequest object.
 */
CreateHarvestJobRequest::CreateHarvestJobRequest()
    : MediaPackageRequest(new CreateHarvestJobRequestPrivate(MediaPackageRequest::CreateHarvestJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHarvestJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHarvestJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHarvestJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateHarvestJobResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::CreateHarvestJobRequestPrivate
 * \brief The CreateHarvestJobRequestPrivate class provides private implementation for CreateHarvestJobRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a CreateHarvestJobRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
CreateHarvestJobRequestPrivate::CreateHarvestJobRequestPrivate(
    const MediaPackageRequest::Action action, CreateHarvestJobRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHarvestJobRequest
 * class' copy constructor.
 */
CreateHarvestJobRequestPrivate::CreateHarvestJobRequestPrivate(
    const CreateHarvestJobRequestPrivate &other, CreateHarvestJobRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
