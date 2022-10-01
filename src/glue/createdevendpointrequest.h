// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVENDPOINTREQUEST_H
#define QTAWS_CREATEDEVENDPOINTREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreateDevEndpointRequestPrivate;

class QTAWSGLUE_EXPORT CreateDevEndpointRequest : public GlueRequest {

public:
    CreateDevEndpointRequest(const CreateDevEndpointRequest &other);
    CreateDevEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDevEndpointRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
