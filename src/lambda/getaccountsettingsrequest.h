// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSETTINGSREQUEST_H
#define QTAWS_GETACCOUNTSETTINGSREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class GetAccountSettingsRequestPrivate;

class QTAWSLAMBDA_EXPORT GetAccountSettingsRequest : public LambdaRequest {

public:
    GetAccountSettingsRequest(const GetAccountSettingsRequest &other);
    GetAccountSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountSettingsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
