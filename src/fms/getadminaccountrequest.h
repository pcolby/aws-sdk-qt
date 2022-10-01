// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADMINACCOUNTREQUEST_H
#define QTAWS_GETADMINACCOUNTREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class GetAdminAccountRequestPrivate;

class QTAWSFMS_EXPORT GetAdminAccountRequest : public FmsRequest {

public:
    GetAdminAccountRequest(const GetAdminAccountRequest &other);
    GetAdminAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAdminAccountRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
