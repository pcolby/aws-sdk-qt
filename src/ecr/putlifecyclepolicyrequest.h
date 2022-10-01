// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLEPOLICYREQUEST_H
#define QTAWS_PUTLIFECYCLEPOLICYREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class PutLifecyclePolicyRequestPrivate;

class QTAWSECR_EXPORT PutLifecyclePolicyRequest : public EcrRequest {

public:
    PutLifecyclePolicyRequest(const PutLifecyclePolicyRequest &other);
    PutLifecyclePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLifecyclePolicyRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
