// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERENDPOINTREQUEST_H
#define QTAWS_MODIFYDBCLUSTERENDPOINTREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBClusterEndpointRequestPrivate;

class QTAWSNEPTUNE_EXPORT ModifyDBClusterEndpointRequest : public NeptuneRequest {

public:
    ModifyDBClusterEndpointRequest(const ModifyDBClusterEndpointRequest &other);
    ModifyDBClusterEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBClusterEndpointRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
