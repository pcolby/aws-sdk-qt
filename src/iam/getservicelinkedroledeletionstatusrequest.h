// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICELINKEDROLEDELETIONSTATUSREQUEST_H
#define QTAWS_GETSERVICELINKEDROLEDELETIONSTATUSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetServiceLinkedRoleDeletionStatusRequestPrivate;

class QTAWSIAM_EXPORT GetServiceLinkedRoleDeletionStatusRequest : public IamRequest {

public:
    GetServiceLinkedRoleDeletionStatusRequest(const GetServiceLinkedRoleDeletionStatusRequest &other);
    GetServiceLinkedRoleDeletionStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceLinkedRoleDeletionStatusRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
