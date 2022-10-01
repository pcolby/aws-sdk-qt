// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILTERREQUEST_P_H
#define QTAWS_DELETEFILTERREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "deletefilterrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeleteFilterRequest;

class DeleteFilterRequestPrivate : public GuardDutyRequestPrivate {

public:
    DeleteFilterRequestPrivate(const GuardDutyRequest::Action action,
                                   DeleteFilterRequest * const q);
    DeleteFilterRequestPrivate(const DeleteFilterRequestPrivate &other,
                                   DeleteFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFilterRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
