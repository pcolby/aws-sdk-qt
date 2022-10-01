// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPVERSIONREQUEST_P_H
#define QTAWS_GETGROUPVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getgroupversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetGroupVersionRequest;

class GetGroupVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetGroupVersionRequestPrivate(const GreengrassRequest::Action action,
                                   GetGroupVersionRequest * const q);
    GetGroupVersionRequestPrivate(const GetGroupVersionRequestPrivate &other,
                                   GetGroupVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGroupVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
