// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNPEERVPCREQUEST_H
#define QTAWS_UNPEERVPCREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class UnpeerVpcRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT UnpeerVpcRequest : public LightsailRequest {

public:
    UnpeerVpcRequest(const UnpeerVpcRequest &other);
    UnpeerVpcRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnpeerVpcRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
