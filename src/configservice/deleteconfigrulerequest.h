// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGRULEREQUEST_H
#define QTAWS_DELETECONFIGRULEREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteConfigRuleRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteConfigRuleRequest : public ConfigServiceRequest {

public:
    DeleteConfigRuleRequest(const DeleteConfigRuleRequest &other);
    DeleteConfigRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
