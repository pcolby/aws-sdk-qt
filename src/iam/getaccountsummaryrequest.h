// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSUMMARYREQUEST_H
#define QTAWS_GETACCOUNTSUMMARYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetAccountSummaryRequestPrivate;

class QTAWSIAM_EXPORT GetAccountSummaryRequest : public IamRequest {

public:
    GetAccountSummaryRequest(const GetAccountSummaryRequest &other);
    GetAccountSummaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountSummaryRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
