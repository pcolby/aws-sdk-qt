// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTCUSTOMIZATIONREQUEST_P_H
#define QTAWS_DELETEACCOUNTCUSTOMIZATIONREQUEST_P_H

#include "quicksightrequest_p.h"
#include "deleteaccountcustomizationrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteAccountCustomizationRequest;

class DeleteAccountCustomizationRequestPrivate : public QuickSightRequestPrivate {

public:
    DeleteAccountCustomizationRequestPrivate(const QuickSightRequest::Action action,
                                   DeleteAccountCustomizationRequest * const q);
    DeleteAccountCustomizationRequestPrivate(const DeleteAccountCustomizationRequestPrivate &other,
                                   DeleteAccountCustomizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccountCustomizationRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
