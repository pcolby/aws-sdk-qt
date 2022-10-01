// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRULEGROUPSNAMESPACEREQUEST_H
#define QTAWS_PUTRULEGROUPSNAMESPACEREQUEST_H

#include "amprequest.h"

namespace QtAws {
namespace Amp {

class PutRuleGroupsNamespaceRequestPrivate;

class QTAWSAMP_EXPORT PutRuleGroupsNamespaceRequest : public AmpRequest {

public:
    PutRuleGroupsNamespaceRequest(const PutRuleGroupsNamespaceRequest &other);
    PutRuleGroupsNamespaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRuleGroupsNamespaceRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
