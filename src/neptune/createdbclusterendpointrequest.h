// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERENDPOINTREQUEST_H
#define QTAWS_CREATEDBCLUSTERENDPOINTREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class CreateDBClusterEndpointRequestPrivate;

class QTAWSNEPTUNE_EXPORT CreateDBClusterEndpointRequest : public NeptuneRequest {

public:
    CreateDBClusterEndpointRequest(const CreateDBClusterEndpointRequest &other);
    CreateDBClusterEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBClusterEndpointRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
