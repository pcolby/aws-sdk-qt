// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTSREQUEST_P_H
#define QTAWS_DESCRIBETRUSTSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "describetrustsrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeTrustsRequest;

class DescribeTrustsRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DescribeTrustsRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DescribeTrustsRequest * const q);
    DescribeTrustsRequestPrivate(const DescribeTrustsRequestPrivate &other,
                                   DescribeTrustsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrustsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
