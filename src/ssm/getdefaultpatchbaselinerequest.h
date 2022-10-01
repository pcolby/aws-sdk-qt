// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEFAULTPATCHBASELINEREQUEST_H
#define QTAWS_GETDEFAULTPATCHBASELINEREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetDefaultPatchBaselineRequestPrivate;

class QTAWSSSM_EXPORT GetDefaultPatchBaselineRequest : public SsmRequest {

public:
    GetDefaultPatchBaselineRequest(const GetDefaultPatchBaselineRequest &other);
    GetDefaultPatchBaselineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDefaultPatchBaselineRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
