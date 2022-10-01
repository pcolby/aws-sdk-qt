// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLERADIUSREQUEST_P_H
#define QTAWS_ENABLERADIUSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "enableradiusrequest.h"

namespace QtAws {
namespace DirectoryService {

class EnableRadiusRequest;

class EnableRadiusRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    EnableRadiusRequestPrivate(const DirectoryServiceRequest::Action action,
                                   EnableRadiusRequest * const q);
    EnableRadiusRequestPrivate(const EnableRadiusRequestPrivate &other,
                                   EnableRadiusRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableRadiusRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
