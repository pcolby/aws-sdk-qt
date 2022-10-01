// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPATCHBASELINEREQUEST_H
#define QTAWS_GETPATCHBASELINEREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetPatchBaselineRequestPrivate;

class QTAWSSSM_EXPORT GetPatchBaselineRequest : public SsmRequest {

public:
    GetPatchBaselineRequest(const GetPatchBaselineRequest &other);
    GetPatchBaselineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPatchBaselineRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
