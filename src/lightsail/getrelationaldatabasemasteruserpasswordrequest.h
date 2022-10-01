// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEMASTERUSERPASSWORDREQUEST_H
#define QTAWS_GETRELATIONALDATABASEMASTERUSERPASSWORDREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseMasterUserPasswordRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseMasterUserPasswordRequest : public LightsailRequest {

public:
    GetRelationalDatabaseMasterUserPasswordRequest(const GetRelationalDatabaseMasterUserPasswordRequest &other);
    GetRelationalDatabaseMasterUserPasswordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseMasterUserPasswordRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
