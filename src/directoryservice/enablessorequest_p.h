// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESSOREQUEST_P_H
#define QTAWS_ENABLESSOREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "enablessorequest.h"

namespace QtAws {
namespace DirectoryService {

class EnableSsoRequest;

class EnableSsoRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    EnableSsoRequestPrivate(const DirectoryServiceRequest::Action action,
                                   EnableSsoRequest * const q);
    EnableSsoRequestPrivate(const EnableSsoRequestPrivate &other,
                                   EnableSsoRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableSsoRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
