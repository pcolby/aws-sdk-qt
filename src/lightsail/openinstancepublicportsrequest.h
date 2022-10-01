// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPENINSTANCEPUBLICPORTSREQUEST_H
#define QTAWS_OPENINSTANCEPUBLICPORTSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class OpenInstancePublicPortsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT OpenInstancePublicPortsRequest : public LightsailRequest {

public:
    OpenInstancePublicPortsRequest(const OpenInstancePublicPortsRequest &other);
    OpenInstancePublicPortsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OpenInstancePublicPortsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
