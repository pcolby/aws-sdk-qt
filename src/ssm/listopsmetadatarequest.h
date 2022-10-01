// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPSMETADATAREQUEST_H
#define QTAWS_LISTOPSMETADATAREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ListOpsMetadataRequestPrivate;

class QTAWSSSM_EXPORT ListOpsMetadataRequest : public SsmRequest {

public:
    ListOpsMetadataRequest(const ListOpsMetadataRequest &other);
    ListOpsMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOpsMetadataRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
