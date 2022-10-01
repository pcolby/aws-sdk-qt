// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOSEINSTANCEPUBLICPORTSREQUEST_H
#define QTAWS_CLOSEINSTANCEPUBLICPORTSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CloseInstancePublicPortsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CloseInstancePublicPortsRequest : public LightsailRequest {

public:
    CloseInstancePublicPortsRequest(const CloseInstancePublicPortsRequest &other);
    CloseInstancePublicPortsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloseInstancePublicPortsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
