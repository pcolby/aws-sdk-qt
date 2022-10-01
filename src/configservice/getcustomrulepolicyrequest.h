// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMRULEPOLICYREQUEST_H
#define QTAWS_GETCUSTOMRULEPOLICYREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetCustomRulePolicyRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetCustomRulePolicyRequest : public ConfigServiceRequest {

public:
    GetCustomRulePolicyRequest(const GetCustomRulePolicyRequest &other);
    GetCustomRulePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCustomRulePolicyRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
