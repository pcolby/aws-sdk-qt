// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDROLETOINSTANCEPROFILEREQUEST_H
#define QTAWS_ADDROLETOINSTANCEPROFILEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class AddRoleToInstanceProfileRequestPrivate;

class QTAWSIAM_EXPORT AddRoleToInstanceProfileRequest : public IamRequest {

public:
    AddRoleToInstanceProfileRequest(const AddRoleToInstanceProfileRequest &other);
    AddRoleToInstanceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddRoleToInstanceProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
