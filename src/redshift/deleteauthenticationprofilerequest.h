// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTHENTICATIONPROFILEREQUEST_H
#define QTAWS_DELETEAUTHENTICATIONPROFILEREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteAuthenticationProfileRequestPrivate;

class QTAWSREDSHIFT_EXPORT DeleteAuthenticationProfileRequest : public RedshiftRequest {

public:
    DeleteAuthenticationProfileRequest(const DeleteAuthenticationProfileRequest &other);
    DeleteAuthenticationProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAuthenticationProfileRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
