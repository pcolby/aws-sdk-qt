// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEENDPOINTACCESSREQUEST_H
#define QTAWS_REVOKEENDPOINTACCESSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class RevokeEndpointAccessRequestPrivate;

class QTAWSREDSHIFT_EXPORT RevokeEndpointAccessRequest : public RedshiftRequest {

public:
    RevokeEndpointAccessRequest(const RevokeEndpointAccessRequest &other);
    RevokeEndpointAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeEndpointAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
