/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATEINTENTVERSIONREQUEST_P_H
#define QTAWS_CREATEINTENTVERSIONREQUEST_P_H

#include "lexmodelbuildingservice_p.h"
#include "createintentversionrequest.h"

namespace AWS {

namespace LexModelBuildingService {

class CreateIntentVersionRequest;

class QTAWS_EXPORT CreateIntentVersionRequestPrivate : public LexModelBuildingServicePrivate {

public:
    CreateIntentVersionRequestPrivate(const LexModelBuildingService::Action action,
                                   CreateIntentVersionRequest * const q);
    CreateIntentVersionRequestPrivate(const CreateIntentVersionRequestPrivate &other,
                                   CreateIntentVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIntentVersionRequest)

};

} // namespace LexModelBuildingService
} // namespace AWS

#endif
