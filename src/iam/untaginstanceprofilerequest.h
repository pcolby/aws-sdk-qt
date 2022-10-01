// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGINSTANCEPROFILEREQUEST_H
#define QTAWS_UNTAGINSTANCEPROFILEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UntagInstanceProfileRequestPrivate;

class QTAWSIAM_EXPORT UntagInstanceProfileRequest : public IamRequest {

public:
    UntagInstanceProfileRequest(const UntagInstanceProfileRequest &other);
    UntagInstanceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagInstanceProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
