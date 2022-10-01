// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSKEYLASTUSEDREQUEST_H
#define QTAWS_GETACCESSKEYLASTUSEDREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetAccessKeyLastUsedRequestPrivate;

class QTAWSIAM_EXPORT GetAccessKeyLastUsedRequest : public IamRequest {

public:
    GetAccessKeyLastUsedRequest(const GetAccessKeyLastUsedRequest &other);
    GetAccessKeyLastUsedRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessKeyLastUsedRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
