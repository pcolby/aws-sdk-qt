// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTCUSTOMIZATIONREQUEST_P_H
#define QTAWS_CREATEACCOUNTCUSTOMIZATIONREQUEST_P_H

#include "quicksightrequest_p.h"
#include "createaccountcustomizationrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateAccountCustomizationRequest;

class CreateAccountCustomizationRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateAccountCustomizationRequestPrivate(const QuickSightRequest::Action action,
                                   CreateAccountCustomizationRequest * const q);
    CreateAccountCustomizationRequestPrivate(const CreateAccountCustomizationRequestPrivate &other,
                                   CreateAccountCustomizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAccountCustomizationRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
