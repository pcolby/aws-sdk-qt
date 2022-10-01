// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLERADIUSREQUEST_P_H
#define QTAWS_DISABLERADIUSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "disableradiusrequest.h"

namespace QtAws {
namespace DirectoryService {

class DisableRadiusRequest;

class DisableRadiusRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DisableRadiusRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DisableRadiusRequest * const q);
    DisableRadiusRequestPrivate(const DisableRadiusRequestPrivate &other,
                                   DisableRadiusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableRadiusRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
