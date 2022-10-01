// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGRULEREQUEST_H
#define QTAWS_PUTCONFIGRULEREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class PutConfigRuleRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT PutConfigRuleRequest : public ConfigServiceRequest {

public:
    PutConfigRuleRequest(const PutConfigRuleRequest &other);
    PutConfigRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
