// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPATCHBASELINEREQUEST_H
#define QTAWS_CREATEPATCHBASELINEREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class CreatePatchBaselineRequestPrivate;

class QTAWSSSM_EXPORT CreatePatchBaselineRequest : public SsmRequest {

public:
    CreatePatchBaselineRequest(const CreatePatchBaselineRequest &other);
    CreatePatchBaselineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePatchBaselineRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
