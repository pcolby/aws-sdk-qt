// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSOFTWAREUPDATESREQUEST_P_H
#define QTAWS_GETSOFTWAREUPDATESREQUEST_P_H

#include "snowballrequest_p.h"
#include "getsoftwareupdatesrequest.h"

namespace QtAws {
namespace Snowball {

class GetSoftwareUpdatesRequest;

class GetSoftwareUpdatesRequestPrivate : public SnowballRequestPrivate {

public:
    GetSoftwareUpdatesRequestPrivate(const SnowballRequest::Action action,
                                   GetSoftwareUpdatesRequest * const q);
    GetSoftwareUpdatesRequestPrivate(const GetSoftwareUpdatesRequestPrivate &other,
                                   GetSoftwareUpdatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSoftwareUpdatesRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
