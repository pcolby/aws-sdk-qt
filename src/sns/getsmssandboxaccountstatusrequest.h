// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSSANDBOXACCOUNTSTATUSREQUEST_H
#define QTAWS_GETSMSSANDBOXACCOUNTSTATUSREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class GetSMSSandboxAccountStatusRequestPrivate;

class QTAWSSNS_EXPORT GetSMSSandboxAccountStatusRequest : public SnsRequest {

public:
    GetSMSSandboxAccountStatusRequest(const GetSMSSandboxAccountStatusRequest &other);
    GetSMSSandboxAccountStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSMSSandboxAccountStatusRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
