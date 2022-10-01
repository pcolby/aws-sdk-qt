// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPROFILEREQUEST_H
#define QTAWS_DESCRIBEUSERPROFILEREQUEST_H

#include "codestarrequest.h"

namespace QtAws {
namespace CodeStar {

class DescribeUserProfileRequestPrivate;

class QTAWSCODESTAR_EXPORT DescribeUserProfileRequest : public CodeStarRequest {

public:
    DescribeUserProfileRequest(const DescribeUserProfileRequest &other);
    DescribeUserProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserProfileRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
