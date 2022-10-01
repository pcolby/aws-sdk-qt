// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDEFAULTPATCHBASELINEREQUEST_H
#define QTAWS_REGISTERDEFAULTPATCHBASELINEREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class RegisterDefaultPatchBaselineRequestPrivate;

class QTAWSSSM_EXPORT RegisterDefaultPatchBaselineRequest : public SsmRequest {

public:
    RegisterDefaultPatchBaselineRequest(const RegisterDefaultPatchBaselineRequest &other);
    RegisterDefaultPatchBaselineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterDefaultPatchBaselineRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
