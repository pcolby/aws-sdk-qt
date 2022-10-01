// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALTABLESETTINGSREQUEST_P_H
#define QTAWS_UPDATEGLOBALTABLESETTINGSREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "updateglobaltablesettingsrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateGlobalTableSettingsRequest;

class UpdateGlobalTableSettingsRequestPrivate : public DynamoDbRequestPrivate {

public:
    UpdateGlobalTableSettingsRequestPrivate(const DynamoDbRequest::Action action,
                                   UpdateGlobalTableSettingsRequest * const q);
    UpdateGlobalTableSettingsRequestPrivate(const UpdateGlobalTableSettingsRequestPrivate &other,
                                   UpdateGlobalTableSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGlobalTableSettingsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
