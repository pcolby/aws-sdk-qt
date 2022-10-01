// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEENDPOINTREQUEST_H
#define QTAWS_INVOKEENDPOINTREQUEST_H

#include "sagemakerruntimerequest.h"

namespace QtAws {
namespace SageMakerRuntime {

class InvokeEndpointRequestPrivate;

class QTAWSSAGEMAKERRUNTIME_EXPORT InvokeEndpointRequest : public SageMakerRuntimeRequest {

public:
    InvokeEndpointRequest(const InvokeEndpointRequest &other);
    InvokeEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InvokeEndpointRequest)

};

} // namespace SageMakerRuntime
} // namespace QtAws

#endif
