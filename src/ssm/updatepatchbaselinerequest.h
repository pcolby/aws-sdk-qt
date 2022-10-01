// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPATCHBASELINEREQUEST_H
#define QTAWS_UPDATEPATCHBASELINEREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class UpdatePatchBaselineRequestPrivate;

class QTAWSSSM_EXPORT UpdatePatchBaselineRequest : public SsmRequest {

public:
    UpdatePatchBaselineRequest(const UpdatePatchBaselineRequest &other);
    UpdatePatchBaselineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePatchBaselineRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
