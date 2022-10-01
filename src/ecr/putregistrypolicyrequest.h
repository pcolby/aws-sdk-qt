// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREGISTRYPOLICYREQUEST_H
#define QTAWS_PUTREGISTRYPOLICYREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class PutRegistryPolicyRequestPrivate;

class QTAWSECR_EXPORT PutRegistryPolicyRequest : public EcrRequest {

public:
    PutRegistryPolicyRequest(const PutRegistryPolicyRequest &other);
    PutRegistryPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRegistryPolicyRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
