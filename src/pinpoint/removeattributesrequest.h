// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEATTRIBUTESREQUEST_H
#define QTAWS_REMOVEATTRIBUTESREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class RemoveAttributesRequestPrivate;

class QTAWSPINPOINT_EXPORT RemoveAttributesRequest : public PinpointRequest {

public:
    RemoveAttributesRequest(const RemoveAttributesRequest &other);
    RemoveAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveAttributesRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
