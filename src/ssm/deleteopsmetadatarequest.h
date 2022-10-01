// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPSMETADATAREQUEST_H
#define QTAWS_DELETEOPSMETADATAREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteOpsMetadataRequestPrivate;

class QTAWSSSM_EXPORT DeleteOpsMetadataRequest : public SsmRequest {

public:
    DeleteOpsMetadataRequest(const DeleteOpsMetadataRequest &other);
    DeleteOpsMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOpsMetadataRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
