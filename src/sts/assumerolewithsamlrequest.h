// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEROLEWITHSAMLREQUEST_H
#define QTAWS_ASSUMEROLEWITHSAMLREQUEST_H

#include "stsrequest.h"

namespace QtAws {
namespace Sts {

class AssumeRoleWithSAMLRequestPrivate;

class QTAWSSTS_EXPORT AssumeRoleWithSAMLRequest : public StsRequest {

public:
    AssumeRoleWithSAMLRequest(const AssumeRoleWithSAMLRequest &other);
    AssumeRoleWithSAMLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssumeRoleWithSAMLRequest)

};

} // namespace Sts
} // namespace QtAws

#endif
