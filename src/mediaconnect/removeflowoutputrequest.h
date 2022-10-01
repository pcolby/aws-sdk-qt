// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWOUTPUTREQUEST_H
#define QTAWS_REMOVEFLOWOUTPUTREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowOutputRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT RemoveFlowOutputRequest : public MediaConnectRequest {

public:
    RemoveFlowOutputRequest(const RemoveFlowOutputRequest &other);
    RemoveFlowOutputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveFlowOutputRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
