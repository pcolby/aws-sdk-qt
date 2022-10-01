/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
