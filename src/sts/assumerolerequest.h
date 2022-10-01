// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEROLEREQUEST_H
#define QTAWS_ASSUMEROLEREQUEST_H

#include "stsrequest.h"

namespace QtAws {
namespace Sts {

class AssumeRoleRequestPrivate;

class QTAWSSTS_EXPORT AssumeRoleRequest : public StsRequest {

public:
    AssumeRoleRequest(const AssumeRoleRequest &other);
    AssumeRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssumeRoleRequest)

};

} // namespace Sts
} // namespace QtAws

#endif
