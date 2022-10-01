// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSOCIATIONREQUEST_H
#define QTAWS_UPDATEASSOCIATIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateAssociationRequestPrivate;

class QTAWSSSM_EXPORT UpdateAssociationRequest : public SsmRequest {

public:
    UpdateAssociationRequest(const UpdateAssociationRequest &other);
    UpdateAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssociationRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
