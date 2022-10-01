// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWSOURCEREQUEST_H
#define QTAWS_REMOVEFLOWSOURCEREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowSourceRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT RemoveFlowSourceRequest : public MediaConnectRequest {

public:
    RemoveFlowSourceRequest(const RemoveFlowSourceRequest &other);
    RemoveFlowSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveFlowSourceRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
