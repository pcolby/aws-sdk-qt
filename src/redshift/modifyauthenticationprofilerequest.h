// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYAUTHENTICATIONPROFILEREQUEST_H
#define QTAWS_MODIFYAUTHENTICATIONPROFILEREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyAuthenticationProfileRequestPrivate;

class QTAWSREDSHIFT_EXPORT ModifyAuthenticationProfileRequest : public RedshiftRequest {

public:
    ModifyAuthenticationProfileRequest(const ModifyAuthenticationProfileRequest &other);
    ModifyAuthenticationProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyAuthenticationProfileRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
