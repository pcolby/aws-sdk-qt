// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOPSMETADATAREQUEST_H
#define QTAWS_UPDATEOPSMETADATAREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateOpsMetadataRequestPrivate;

class QTAWSSSM_EXPORT UpdateOpsMetadataRequest : public SsmRequest {

public:
    UpdateOpsMetadataRequest(const UpdateOpsMetadataRequest &other);
    UpdateOpsMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOpsMetadataRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
