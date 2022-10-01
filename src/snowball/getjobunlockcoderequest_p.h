// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBUNLOCKCODEREQUEST_P_H
#define QTAWS_GETJOBUNLOCKCODEREQUEST_P_H

#include "snowballrequest_p.h"
#include "getjobunlockcoderequest.h"

namespace QtAws {
namespace Snowball {

class GetJobUnlockCodeRequest;

class GetJobUnlockCodeRequestPrivate : public SnowballRequestPrivate {

public:
    GetJobUnlockCodeRequestPrivate(const SnowballRequest::Action action,
                                   GetJobUnlockCodeRequest * const q);
    GetJobUnlockCodeRequestPrivate(const GetJobUnlockCodeRequestPrivate &other,
                                   GetJobUnlockCodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobUnlockCodeRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
