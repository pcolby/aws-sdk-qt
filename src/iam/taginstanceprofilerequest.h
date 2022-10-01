// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGINSTANCEPROFILEREQUEST_H
#define QTAWS_TAGINSTANCEPROFILEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class TagInstanceProfileRequestPrivate;

class QTAWSIAM_EXPORT TagInstanceProfileRequest : public IamRequest {

public:
    TagInstanceProfileRequest(const TagInstanceProfileRequest &other);
    TagInstanceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagInstanceProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
