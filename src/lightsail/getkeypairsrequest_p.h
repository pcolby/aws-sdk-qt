// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYPAIRSREQUEST_P_H
#define QTAWS_GETKEYPAIRSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getkeypairsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetKeyPairsRequest;

class GetKeyPairsRequestPrivate : public LightsailRequestPrivate {

public:
    GetKeyPairsRequestPrivate(const LightsailRequest::Action action,
                                   GetKeyPairsRequest * const q);
    GetKeyPairsRequestPrivate(const GetKeyPairsRequestPrivate &other,
                                   GetKeyPairsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetKeyPairsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
