// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWOUTPUTREQUEST_H
#define QTAWS_UPDATEFLOWOUTPUTREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowOutputRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT UpdateFlowOutputRequest : public MediaConnectRequest {

public:
    UpdateFlowOutputRequest(const UpdateFlowOutputRequest &other);
    UpdateFlowOutputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFlowOutputRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
