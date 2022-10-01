// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTHENTICATIONPROFILEREQUEST_H
#define QTAWS_CREATEAUTHENTICATIONPROFILEREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class CreateAuthenticationProfileRequestPrivate;

class QTAWSREDSHIFT_EXPORT CreateAuthenticationProfileRequest : public RedshiftRequest {

public:
    CreateAuthenticationProfileRequest(const CreateAuthenticationProfileRequest &other);
    CreateAuthenticationProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAuthenticationProfileRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
