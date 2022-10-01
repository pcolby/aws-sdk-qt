// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWSOURCEREQUEST_H
#define QTAWS_UPDATEFLOWSOURCEREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowSourceRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT UpdateFlowSourceRequest : public MediaConnectRequest {

public:
    UpdateFlowSourceRequest(const UpdateFlowSourceRequest &other);
    UpdateFlowSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFlowSourceRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
