// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLIFECYCLEPOLICYREQUEST_H
#define QTAWS_GETLIFECYCLEPOLICYREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class GetLifecyclePolicyRequestPrivate;

class QTAWSECR_EXPORT GetLifecyclePolicyRequest : public EcrRequest {

public:
    GetLifecyclePolicyRequest(const GetLifecyclePolicyRequest &other);
    GetLifecyclePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLifecyclePolicyRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
