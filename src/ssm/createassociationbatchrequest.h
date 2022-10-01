// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSOCIATIONBATCHREQUEST_H
#define QTAWS_CREATEASSOCIATIONBATCHREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class CreateAssociationBatchRequestPrivate;

class QTAWSSSM_EXPORT CreateAssociationBatchRequest : public SsmRequest {

public:
    CreateAssociationBatchRequest(const CreateAssociationBatchRequest &other);
    CreateAssociationBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssociationBatchRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
