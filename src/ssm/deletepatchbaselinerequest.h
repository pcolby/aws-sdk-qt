// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPATCHBASELINEREQUEST_H
#define QTAWS_DELETEPATCHBASELINEREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DeletePatchBaselineRequestPrivate;

class QTAWSSSM_EXPORT DeletePatchBaselineRequest : public SsmRequest {

public:
    DeletePatchBaselineRequest(const DeletePatchBaselineRequest &other);
    DeletePatchBaselineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePatchBaselineRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
