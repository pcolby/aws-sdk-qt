// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATESTATICIPREQUEST_H
#define QTAWS_ALLOCATESTATICIPREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class AllocateStaticIpRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT AllocateStaticIpRequest : public LightsailRequest {

public:
    AllocateStaticIpRequest(const AllocateStaticIpRequest &other);
    AllocateStaticIpRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocateStaticIpRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
