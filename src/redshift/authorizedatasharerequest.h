// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEDATASHAREREQUEST_H
#define QTAWS_AUTHORIZEDATASHAREREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class AuthorizeDataShareRequestPrivate;

class QTAWSREDSHIFT_EXPORT AuthorizeDataShareRequest : public RedshiftRequest {

public:
    AuthorizeDataShareRequest(const AuthorizeDataShareRequest &other);
    AuthorizeDataShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeDataShareRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
