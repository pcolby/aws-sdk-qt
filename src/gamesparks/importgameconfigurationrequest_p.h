// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTGAMECONFIGURATIONREQUEST_P_H
#define QTAWS_IMPORTGAMECONFIGURATIONREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "importgameconfigurationrequest.h"

namespace QtAws {
namespace GameSparks {

class ImportGameConfigurationRequest;

class ImportGameConfigurationRequestPrivate : public GameSparksRequestPrivate {

public:
    ImportGameConfigurationRequestPrivate(const GameSparksRequest::Action action,
                                   ImportGameConfigurationRequest * const q);
    ImportGameConfigurationRequestPrivate(const ImportGameConfigurationRequestPrivate &other,
                                   ImportGameConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportGameConfigurationRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
