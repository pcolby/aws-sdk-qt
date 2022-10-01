// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCEATTRIBUTEREQUEST_H
#define QTAWS_UPDATEINSTANCEATTRIBUTEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateInstanceAttributeRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateInstanceAttributeRequest : public ConnectRequest {

public:
    UpdateInstanceAttributeRequest(const UpdateInstanceAttributeRequest &other);
    UpdateInstanceAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInstanceAttributeRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
