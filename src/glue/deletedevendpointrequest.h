// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVENDPOINTREQUEST_H
#define QTAWS_DELETEDEVENDPOINTREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteDevEndpointRequestPrivate;

class QTAWSGLUE_EXPORT DeleteDevEndpointRequest : public GlueRequest {

public:
    DeleteDevEndpointRequest(const DeleteDevEndpointRequest &other);
    DeleteDevEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDevEndpointRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
