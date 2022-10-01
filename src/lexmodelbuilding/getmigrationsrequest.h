// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMIGRATIONSREQUEST_H
#define QTAWS_GETMIGRATIONSREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetMigrationsRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetMigrationsRequest : public LexModelBuildingRequest {

public:
    GetMigrationsRequest(const GetMigrationsRequest &other);
    GetMigrationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMigrationsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
