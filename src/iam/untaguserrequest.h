// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGUSERREQUEST_H
#define QTAWS_UNTAGUSERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UntagUserRequestPrivate;

class QTAWSIAM_EXPORT UntagUserRequest : public IamRequest {

public:
    UntagUserRequest(const UntagUserRequest &other);
    UntagUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagUserRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
