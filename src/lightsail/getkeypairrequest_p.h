// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYPAIRREQUEST_P_H
#define QTAWS_GETKEYPAIRREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getkeypairrequest.h"

namespace QtAws {
namespace Lightsail {

class GetKeyPairRequest;

class GetKeyPairRequestPrivate : public LightsailRequestPrivate {

public:
    GetKeyPairRequestPrivate(const LightsailRequest::Action action,
                                   GetKeyPairRequest * const q);
    GetKeyPairRequestPrivate(const GetKeyPairRequestPrivate &other,
                                   GetKeyPairRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetKeyPairRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
