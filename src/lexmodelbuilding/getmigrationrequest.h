// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMIGRATIONREQUEST_H
#define QTAWS_GETMIGRATIONREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetMigrationRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetMigrationRequest : public LexModelBuildingRequest {

public:
    GetMigrationRequest(const GetMigrationRequest &other);
    GetMigrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMigrationRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
