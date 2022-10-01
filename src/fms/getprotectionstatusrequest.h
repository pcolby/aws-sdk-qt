// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROTECTIONSTATUSREQUEST_H
#define QTAWS_GETPROTECTIONSTATUSREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class GetProtectionStatusRequestPrivate;

class QTAWSFMS_EXPORT GetProtectionStatusRequest : public FmsRequest {

public:
    GetProtectionStatusRequest(const GetProtectionStatusRequest &other);
    GetProtectionStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProtectionStatusRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
