// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGAMECONFIGURATIONREQUEST_P_H
#define QTAWS_GETGAMECONFIGURATIONREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "getgameconfigurationrequest.h"

namespace QtAws {
namespace GameSparks {

class GetGameConfigurationRequest;

class GetGameConfigurationRequestPrivate : public GameSparksRequestPrivate {

public:
    GetGameConfigurationRequestPrivate(const GameSparksRequest::Action action,
                                   GetGameConfigurationRequest * const q);
    GetGameConfigurationRequestPrivate(const GetGameConfigurationRequestPrivate &other,
                                   GetGameConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGameConfigurationRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
