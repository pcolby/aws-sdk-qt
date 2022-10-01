// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALTABLESETTINGSREQUEST_H
#define QTAWS_UPDATEGLOBALTABLESETTINGSREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateGlobalTableSettingsRequestPrivate;

class QTAWSDYNAMODB_EXPORT UpdateGlobalTableSettingsRequest : public DynamoDbRequest {

public:
    UpdateGlobalTableSettingsRequest(const UpdateGlobalTableSettingsRequest &other);
    UpdateGlobalTableSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGlobalTableSettingsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
