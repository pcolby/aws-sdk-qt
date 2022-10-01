// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSOCIATIONSTATUSREQUEST_H
#define QTAWS_UPDATEASSOCIATIONSTATUSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateAssociationStatusRequestPrivate;

class QTAWSSSM_EXPORT UpdateAssociationStatusRequest : public SsmRequest {

public:
    UpdateAssociationStatusRequest(const UpdateAssociationStatusRequest &other);
    UpdateAssociationStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssociationStatusRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
