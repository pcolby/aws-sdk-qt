// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALTABLESETTINGSRESPONSE_H
#define QTAWS_UPDATEGLOBALTABLESETTINGSRESPONSE_H

#include "dynamodbresponse.h"
#include "updateglobaltablesettingsrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateGlobalTableSettingsResponsePrivate;

class QTAWSDYNAMODB_EXPORT UpdateGlobalTableSettingsResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    UpdateGlobalTableSettingsResponse(const UpdateGlobalTableSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGlobalTableSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGlobalTableSettingsResponse)
    Q_DISABLE_COPY(UpdateGlobalTableSettingsResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
