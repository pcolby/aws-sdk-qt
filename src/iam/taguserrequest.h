// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGUSERREQUEST_H
#define QTAWS_TAGUSERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class TagUserRequestPrivate;

class QTAWSIAM_EXPORT TagUserRequest : public IamRequest {

public:
    TagUserRequest(const TagUserRequest &other);
    TagUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagUserRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
