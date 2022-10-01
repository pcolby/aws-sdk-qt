// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTREQUEST_P_H
#define QTAWS_UPDATEACCOUNTREQUEST_P_H

#include "chimerequest_p.h"
#include "updateaccountrequest.h"

namespace QtAws {
namespace Chime {

class UpdateAccountRequest;

class UpdateAccountRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateAccountRequestPrivate(const ChimeRequest::Action action,
                                   UpdateAccountRequest * const q);
    UpdateAccountRequestPrivate(const UpdateAccountRequestPrivate &other,
                                   UpdateAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAccountRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
