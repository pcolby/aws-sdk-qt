// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateblueprintrequest.h"
#include "updateblueprintrequest_p.h"
#include "updateblueprintresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateBlueprintRequest
 * \brief The UpdateBlueprintRequest class provides an interface for Glue UpdateBlueprint requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateBlueprint
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBlueprintRequest::UpdateBlueprintRequest(const UpdateBlueprintRequest &other)
    : GlueRequest(new UpdateBlueprintRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBlueprintRequest object.
 */
UpdateBlueprintRequest::UpdateBlueprintRequest()
    : GlueRequest(new UpdateBlueprintRequestPrivate(GlueRequest::UpdateBlueprintAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBlueprintRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBlueprintResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBlueprintRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBlueprintResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateBlueprintRequestPrivate
 * \brief The UpdateBlueprintRequestPrivate class provides private implementation for UpdateBlueprintRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateBlueprintRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateBlueprintRequestPrivate::UpdateBlueprintRequestPrivate(
    const GlueRequest::Action action, UpdateBlueprintRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBlueprintRequest
 * class' copy constructor.
 */
UpdateBlueprintRequestPrivate::UpdateBlueprintRequestPrivate(
    const UpdateBlueprintRequestPrivate &other, UpdateBlueprintRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
