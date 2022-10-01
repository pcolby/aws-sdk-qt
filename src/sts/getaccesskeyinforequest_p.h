// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSKEYINFOREQUEST_P_H
#define QTAWS_GETACCESSKEYINFOREQUEST_P_H

#include "stsrequest_p.h"
#include "getaccesskeyinforequest.h"

namespace QtAws {
namespace Sts {

class GetAccessKeyInfoRequest;

class GetAccessKeyInfoRequestPrivate : public StsRequestPrivate {

public:
    GetAccessKeyInfoRequestPrivate(const StsRequest::Action action,
                                   GetAccessKeyInfoRequest * const q);
    GetAccessKeyInfoRequestPrivate(const GetAccessKeyInfoRequestPrivate &other,
                                   GetAccessKeyInfoRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccessKeyInfoRequest)

};

} // namespace Sts
} // namespace QtAws

#endif
