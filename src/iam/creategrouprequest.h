// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPREQUEST_H
#define QTAWS_CREATEGROUPREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class CreateGroupRequestPrivate;

class QTAWSIAM_EXPORT CreateGroupRequest : public IamRequest {

public:
    CreateGroupRequest(const CreateGroupRequest &other);
    CreateGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGroupRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
