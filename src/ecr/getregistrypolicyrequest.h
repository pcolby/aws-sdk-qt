// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYPOLICYREQUEST_H
#define QTAWS_GETREGISTRYPOLICYREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class GetRegistryPolicyRequestPrivate;

class QTAWSECR_EXPORT GetRegistryPolicyRequest : public EcrRequest {

public:
    GetRegistryPolicyRequest(const GetRegistryPolicyRequest &other);
    GetRegistryPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegistryPolicyRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
