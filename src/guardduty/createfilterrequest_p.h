// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILTERREQUEST_P_H
#define QTAWS_CREATEFILTERREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "createfilterrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreateFilterRequest;

class CreateFilterRequestPrivate : public GuardDutyRequestPrivate {

public:
    CreateFilterRequestPrivate(const GuardDutyRequest::Action action,
                                   CreateFilterRequest * const q);
    CreateFilterRequestPrivate(const CreateFilterRequestPrivate &other,
                                   CreateFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFilterRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
