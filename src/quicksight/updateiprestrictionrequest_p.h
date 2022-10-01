// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIPRESTRICTIONREQUEST_P_H
#define QTAWS_UPDATEIPRESTRICTIONREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updateiprestrictionrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateIpRestrictionRequest;

class UpdateIpRestrictionRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateIpRestrictionRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateIpRestrictionRequest * const q);
    UpdateIpRestrictionRequestPrivate(const UpdateIpRestrictionRequestPrivate &other,
                                   UpdateIpRestrictionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIpRestrictionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
