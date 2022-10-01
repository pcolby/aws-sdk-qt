// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEPHONENUMBERREQUEST_P_H
#define QTAWS_BATCHDELETEPHONENUMBERREQUEST_P_H

#include "chimerequest_p.h"
#include "batchdeletephonenumberrequest.h"

namespace QtAws {
namespace Chime {

class BatchDeletePhoneNumberRequest;

class BatchDeletePhoneNumberRequestPrivate : public ChimeRequestPrivate {

public:
    BatchDeletePhoneNumberRequestPrivate(const ChimeRequest::Action action,
                                   BatchDeletePhoneNumberRequest * const q);
    BatchDeletePhoneNumberRequestPrivate(const BatchDeletePhoneNumberRequestPrivate &other,
                                   BatchDeletePhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeletePhoneNumberRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
