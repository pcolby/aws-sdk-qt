// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEUSERREQUEST_P_H
#define QTAWS_BATCHUPDATEUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "batchupdateuserrequest.h"

namespace QtAws {
namespace Chime {

class BatchUpdateUserRequest;

class BatchUpdateUserRequestPrivate : public ChimeRequestPrivate {

public:
    BatchUpdateUserRequestPrivate(const ChimeRequest::Action action,
                                   BatchUpdateUserRequest * const q);
    BatchUpdateUserRequestPrivate(const BatchUpdateUserRequestPrivate &other,
                                   BatchUpdateUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchUpdateUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
