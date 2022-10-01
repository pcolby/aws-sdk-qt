// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTCUSTOMIZATIONREQUEST_P_H
#define QTAWS_UPDATEACCOUNTCUSTOMIZATIONREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updateaccountcustomizationrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateAccountCustomizationRequest;

class UpdateAccountCustomizationRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateAccountCustomizationRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateAccountCustomizationRequest * const q);
    UpdateAccountCustomizationRequestPrivate(const UpdateAccountCustomizationRequestPrivate &other,
                                   UpdateAccountCustomizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAccountCustomizationRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
