// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEROLEWITHWEBIDENTITYREQUEST_H
#define QTAWS_ASSUMEROLEWITHWEBIDENTITYREQUEST_H

#include "stsrequest.h"

namespace QtAws {
namespace Sts {

class AssumeRoleWithWebIdentityRequestPrivate;

class QTAWSSTS_EXPORT AssumeRoleWithWebIdentityRequest : public StsRequest {

public:
    AssumeRoleWithWebIdentityRequest(const AssumeRoleWithWebIdentityRequest &other);
    AssumeRoleWithWebIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssumeRoleWithWebIdentityRequest)

};

} // namespace Sts
} // namespace QtAws

#endif
