// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESSOREQUEST_P_H
#define QTAWS_DISABLESSOREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "disablessorequest.h"

namespace QtAws {
namespace DirectoryService {

class DisableSsoRequest;

class DisableSsoRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DisableSsoRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DisableSsoRequest * const q);
    DisableSsoRequestPrivate(const DisableSsoRequestPrivate &other,
                                   DisableSsoRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableSsoRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
