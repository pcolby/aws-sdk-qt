// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEENDPOINTASYNCREQUEST_H
#define QTAWS_INVOKEENDPOINTASYNCREQUEST_H

#include "sagemakerruntimerequest.h"

namespace QtAws {
namespace SageMakerRuntime {

class InvokeEndpointAsyncRequestPrivate;

class QTAWSSAGEMAKERRUNTIME_EXPORT InvokeEndpointAsyncRequest : public SageMakerRuntimeRequest {

public:
    InvokeEndpointAsyncRequest(const InvokeEndpointAsyncRequest &other);
    InvokeEndpointAsyncRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InvokeEndpointAsyncRequest)

};

} // namespace SageMakerRuntime
} // namespace QtAws

#endif
