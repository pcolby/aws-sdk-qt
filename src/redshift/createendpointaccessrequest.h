// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTACCESSREQUEST_H
#define QTAWS_CREATEENDPOINTACCESSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class CreateEndpointAccessRequestPrivate;

class QTAWSREDSHIFT_EXPORT CreateEndpointAccessRequest : public RedshiftRequest {

public:
    CreateEndpointAccessRequest(const CreateEndpointAccessRequest &other);
    CreateEndpointAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEndpointAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
