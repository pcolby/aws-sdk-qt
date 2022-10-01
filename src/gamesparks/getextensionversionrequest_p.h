// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTENSIONVERSIONREQUEST_P_H
#define QTAWS_GETEXTENSIONVERSIONREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "getextensionversionrequest.h"

namespace QtAws {
namespace GameSparks {

class GetExtensionVersionRequest;

class GetExtensionVersionRequestPrivate : public GameSparksRequestPrivate {

public:
    GetExtensionVersionRequestPrivate(const GameSparksRequest::Action action,
                                   GetExtensionVersionRequest * const q);
    GetExtensionVersionRequestPrivate(const GetExtensionVersionRequestPrivate &other,
                                   GetExtensionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExtensionVersionRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
