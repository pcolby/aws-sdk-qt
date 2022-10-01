// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSOCIATIONREQUEST_H
#define QTAWS_CREATEASSOCIATIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class CreateAssociationRequestPrivate;

class QTAWSSSM_EXPORT CreateAssociationRequest : public SsmRequest {

public:
    CreateAssociationRequest(const CreateAssociationRequest &other);
    CreateAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssociationRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
