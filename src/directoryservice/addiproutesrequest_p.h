// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDIPROUTESREQUEST_P_H
#define QTAWS_ADDIPROUTESREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "addiproutesrequest.h"

namespace QtAws {
namespace DirectoryService {

class AddIpRoutesRequest;

class AddIpRoutesRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    AddIpRoutesRequestPrivate(const DirectoryServiceRequest::Action action,
                                   AddIpRoutesRequest * const q);
    AddIpRoutesRequestPrivate(const AddIpRoutesRequestPrivate &other,
                                   AddIpRoutesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddIpRoutesRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
