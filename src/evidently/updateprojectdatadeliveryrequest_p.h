// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTDATADELIVERYREQUEST_P_H
#define QTAWS_UPDATEPROJECTDATADELIVERYREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "updateprojectdatadeliveryrequest.h"

namespace QtAws {
namespace Evidently {

class UpdateProjectDataDeliveryRequest;

class UpdateProjectDataDeliveryRequestPrivate : public EvidentlyRequestPrivate {

public:
    UpdateProjectDataDeliveryRequestPrivate(const EvidentlyRequest::Action action,
                                   UpdateProjectDataDeliveryRequest * const q);
    UpdateProjectDataDeliveryRequestPrivate(const UpdateProjectDataDeliveryRequestPrivate &other,
                                   UpdateProjectDataDeliveryRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProjectDataDeliveryRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
