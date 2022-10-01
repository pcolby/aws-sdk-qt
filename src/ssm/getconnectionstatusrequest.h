// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONSTATUSREQUEST_H
#define QTAWS_GETCONNECTIONSTATUSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetConnectionStatusRequestPrivate;

class QTAWSSSM_EXPORT GetConnectionStatusRequest : public SsmRequest {

public:
    GetConnectionStatusRequest(const GetConnectionStatusRequest &other);
    GetConnectionStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectionStatusRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
