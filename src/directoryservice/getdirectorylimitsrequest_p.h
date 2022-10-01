// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIRECTORYLIMITSREQUEST_P_H
#define QTAWS_GETDIRECTORYLIMITSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "getdirectorylimitsrequest.h"

namespace QtAws {
namespace DirectoryService {

class GetDirectoryLimitsRequest;

class GetDirectoryLimitsRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    GetDirectoryLimitsRequestPrivate(const DirectoryServiceRequest::Action action,
                                   GetDirectoryLimitsRequest * const q);
    GetDirectoryLimitsRequestPrivate(const GetDirectoryLimitsRequestPrivate &other,
                                   GetDirectoryLimitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDirectoryLimitsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
