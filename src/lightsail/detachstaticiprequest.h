// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHSTATICIPREQUEST_H
#define QTAWS_DETACHSTATICIPREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DetachStaticIpRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DetachStaticIpRequest : public LightsailRequest {

public:
    DetachStaticIpRequest(const DetachStaticIpRequest &other);
    DetachStaticIpRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachStaticIpRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
