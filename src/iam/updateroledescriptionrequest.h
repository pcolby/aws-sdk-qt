// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROLEDESCRIPTIONREQUEST_H
#define QTAWS_UPDATEROLEDESCRIPTIONREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UpdateRoleDescriptionRequestPrivate;

class QTAWSIAM_EXPORT UpdateRoleDescriptionRequest : public IamRequest {

public:
    UpdateRoleDescriptionRequest(const UpdateRoleDescriptionRequest &other);
    UpdateRoleDescriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoleDescriptionRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
