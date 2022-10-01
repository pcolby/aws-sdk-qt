// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPSMETADATAREQUEST_H
#define QTAWS_GETOPSMETADATAREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetOpsMetadataRequestPrivate;

class QTAWSSSM_EXPORT GetOpsMetadataRequest : public SsmRequest {

public:
    GetOpsMetadataRequest(const GetOpsMetadataRequest &other);
    GetOpsMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOpsMetadataRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
