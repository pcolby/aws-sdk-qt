// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBRANCHREQUEST_H
#define QTAWS_GETBRANCHREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class GetBranchRequestPrivate;

class QTAWSAMPLIFY_EXPORT GetBranchRequest : public AmplifyRequest {

public:
    GetBranchRequest(const GetBranchRequest &other);
    GetBranchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBranchRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
