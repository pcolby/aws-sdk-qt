// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTFROMSERVICEREQUEST_H
#define QTAWS_DISCONNECTFROMSERVICEREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class DisconnectFromServiceRequestPrivate;

class QTAWSMGN_EXPORT DisconnectFromServiceRequest : public MgnRequest {

public:
    DisconnectFromServiceRequest(const DisconnectFromServiceRequest &other);
    DisconnectFromServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisconnectFromServiceRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
