// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVENDPOINTREQUEST_H
#define QTAWS_GETDEVENDPOINTREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetDevEndpointRequestPrivate;

class QTAWSGLUE_EXPORT GetDevEndpointRequest : public GlueRequest {

public:
    GetDevEndpointRequest(const GetDevEndpointRequest &other);
    GetDevEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevEndpointRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
