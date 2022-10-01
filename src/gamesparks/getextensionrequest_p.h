// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTENSIONREQUEST_P_H
#define QTAWS_GETEXTENSIONREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "getextensionrequest.h"

namespace QtAws {
namespace GameSparks {

class GetExtensionRequest;

class GetExtensionRequestPrivate : public GameSparksRequestPrivate {

public:
    GetExtensionRequestPrivate(const GameSparksRequest::Action action,
                                   GetExtensionRequest * const q);
    GetExtensionRequestPrivate(const GetExtensionRequestPrivate &other,
                                   GetExtensionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExtensionRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
