// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINSTANCEPUBLICPORTSREQUEST_H
#define QTAWS_PUTINSTANCEPUBLICPORTSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class PutInstancePublicPortsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT PutInstancePublicPortsRequest : public LightsailRequest {

public:
    PutInstancePublicPortsRequest(const PutInstancePublicPortsRequest &other);
    PutInstancePublicPortsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutInstancePublicPortsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
