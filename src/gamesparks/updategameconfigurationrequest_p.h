// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMECONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEGAMECONFIGURATIONREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "updategameconfigurationrequest.h"

namespace QtAws {
namespace GameSparks {

class UpdateGameConfigurationRequest;

class UpdateGameConfigurationRequestPrivate : public GameSparksRequestPrivate {

public:
    UpdateGameConfigurationRequestPrivate(const GameSparksRequest::Action action,
                                   UpdateGameConfigurationRequest * const q);
    UpdateGameConfigurationRequestPrivate(const UpdateGameConfigurationRequestPrivate &other,
                                   UpdateGameConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGameConfigurationRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
