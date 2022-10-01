// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVENDPOINTREQUEST_H
#define QTAWS_UPDATEDEVENDPOINTREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class UpdateDevEndpointRequestPrivate;

class QTAWSGLUE_EXPORT UpdateDevEndpointRequest : public GlueRequest {

public:
    UpdateDevEndpointRequest(const UpdateDevEndpointRequest &other);
    UpdateDevEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDevEndpointRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
