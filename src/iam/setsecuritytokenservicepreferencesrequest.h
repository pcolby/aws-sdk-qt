// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSECURITYTOKENSERVICEPREFERENCESREQUEST_H
#define QTAWS_SETSECURITYTOKENSERVICEPREFERENCESREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class SetSecurityTokenServicePreferencesRequestPrivate;

class QTAWSIAM_EXPORT SetSecurityTokenServicePreferencesRequest : public IamRequest {

public:
    SetSecurityTokenServicePreferencesRequest(const SetSecurityTokenServicePreferencesRequest &other);
    SetSecurityTokenServicePreferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetSecurityTokenServicePreferencesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
