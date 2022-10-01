// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIVENAMESREQUEST_P_H
#define QTAWS_GETACTIVENAMESREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getactivenamesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetActiveNamesRequest;

class GetActiveNamesRequestPrivate : public LightsailRequestPrivate {

public:
    GetActiveNamesRequestPrivate(const LightsailRequest::Action action,
                                   GetActiveNamesRequest * const q);
    GetActiveNamesRequestPrivate(const GetActiveNamesRequestPrivate &other,
                                   GetActiveNamesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetActiveNamesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
