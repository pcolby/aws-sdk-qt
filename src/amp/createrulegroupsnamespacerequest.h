// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEGROUPSNAMESPACEREQUEST_H
#define QTAWS_CREATERULEGROUPSNAMESPACEREQUEST_H

#include "amprequest.h"

namespace QtAws {
namespace Amp {

class CreateRuleGroupsNamespaceRequestPrivate;

class QTAWSAMP_EXPORT CreateRuleGroupsNamespaceRequest : public AmpRequest {

public:
    CreateRuleGroupsNamespaceRequest(const CreateRuleGroupsNamespaceRequest &other);
    CreateRuleGroupsNamespaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRuleGroupsNamespaceRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
