/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_PUTBOTALIASREQUEST_P_H
#define QTAWS_PUTBOTALIASREQUEST_P_H

#include "lexmodelbuildingservice_p.h"
#include "putbotaliasrequest.h"

namespace AWS {

namespace LexModelBuildingService {

class PutBotAliasRequest;

class QTAWS_EXPORT PutBotAliasRequestPrivate : public LexModelBuildingServicePrivate {

public:
    PutBotAliasRequestPrivate(const LexModelBuildingService::Action action,
                                   PutBotAliasRequest * const q);
    PutBotAliasRequestPrivate(const PutBotAliasRequestPrivate &other,
                                   PutBotAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBotAliasRequest)

};

} // namespace LexModelBuildingService
} // namespace AWS

#endif
