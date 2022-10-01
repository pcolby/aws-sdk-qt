// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERENDPOINTREQUEST_H
#define QTAWS_DELETEDBCLUSTERENDPOINTREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DeleteDBClusterEndpointRequestPrivate;

class QTAWSNEPTUNE_EXPORT DeleteDBClusterEndpointRequest : public NeptuneRequest {

public:
    DeleteDBClusterEndpointRequest(const DeleteDBClusterEndpointRequest &other);
    DeleteDBClusterEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBClusterEndpointRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
