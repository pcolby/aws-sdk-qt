// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASESTATICIPREQUEST_H
#define QTAWS_RELEASESTATICIPREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class ReleaseStaticIpRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT ReleaseStaticIpRequest : public LightsailRequest {

public:
    ReleaseStaticIpRequest(const ReleaseStaticIpRequest &other);
    ReleaseStaticIpRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReleaseStaticIpRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
