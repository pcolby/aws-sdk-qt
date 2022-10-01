// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULEGROUPSNAMESPACESREQUEST_H
#define QTAWS_LISTRULEGROUPSNAMESPACESREQUEST_H

#include "amprequest.h"

namespace QtAws {
namespace Amp {

class ListRuleGroupsNamespacesRequestPrivate;

class QTAWSAMP_EXPORT ListRuleGroupsNamespacesRequest : public AmpRequest {

public:
    ListRuleGroupsNamespacesRequest(const ListRuleGroupsNamespacesRequest &other);
    ListRuleGroupsNamespacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRuleGroupsNamespacesRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
