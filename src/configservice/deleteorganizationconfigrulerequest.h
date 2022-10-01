// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONCONFIGRULEREQUEST_H
#define QTAWS_DELETEORGANIZATIONCONFIGRULEREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteOrganizationConfigRuleRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteOrganizationConfigRuleRequest : public ConfigServiceRequest {

public:
    DeleteOrganizationConfigRuleRequest(const DeleteOrganizationConfigRuleRequest &other);
    DeleteOrganizationConfigRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOrganizationConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
