// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILECONCURRENCYREQUEST_H
#define QTAWS_UPDATEROUTINGPROFILECONCURRENCYREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileConcurrencyRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateRoutingProfileConcurrencyRequest : public ConnectRequest {

public:
    UpdateRoutingProfileConcurrencyRequest(const UpdateRoutingProfileConcurrencyRequest &other);
    UpdateRoutingProfileConcurrencyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoutingProfileConcurrencyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
