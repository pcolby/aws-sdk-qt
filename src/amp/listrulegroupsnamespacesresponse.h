// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULEGROUPSNAMESPACESRESPONSE_H
#define QTAWS_LISTRULEGROUPSNAMESPACESRESPONSE_H

#include "ampresponse.h"
#include "listrulegroupsnamespacesrequest.h"

namespace QtAws {
namespace Amp {

class ListRuleGroupsNamespacesResponsePrivate;

class QTAWSAMP_EXPORT ListRuleGroupsNamespacesResponse : public AmpResponse {
    Q_OBJECT

public:
    ListRuleGroupsNamespacesResponse(const ListRuleGroupsNamespacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRuleGroupsNamespacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRuleGroupsNamespacesResponse)
    Q_DISABLE_COPY(ListRuleGroupsNamespacesResponse)

};

} // namespace Amp
} // namespace QtAws

#endif
