// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEPHONENUMBERREQUEST_P_H
#define QTAWS_BATCHUPDATEPHONENUMBERREQUEST_P_H

#include "chimerequest_p.h"
#include "batchupdatephonenumberrequest.h"

namespace QtAws {
namespace Chime {

class BatchUpdatePhoneNumberRequest;

class BatchUpdatePhoneNumberRequestPrivate : public ChimeRequestPrivate {

public:
    BatchUpdatePhoneNumberRequestPrivate(const ChimeRequest::Action action,
                                   BatchUpdatePhoneNumberRequest * const q);
    BatchUpdatePhoneNumberRequestPrivate(const BatchUpdatePhoneNumberRequestPrivate &other,
                                   BatchUpdatePhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchUpdatePhoneNumberRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
