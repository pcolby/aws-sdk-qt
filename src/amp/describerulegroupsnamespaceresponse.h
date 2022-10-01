// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULEGROUPSNAMESPACERESPONSE_H
#define QTAWS_DESCRIBERULEGROUPSNAMESPACERESPONSE_H

#include "ampresponse.h"
#include "describerulegroupsnamespacerequest.h"

namespace QtAws {
namespace Amp {

class DescribeRuleGroupsNamespaceResponsePrivate;

class QTAWSAMP_EXPORT DescribeRuleGroupsNamespaceResponse : public AmpResponse {
    Q_OBJECT

public:
    DescribeRuleGroupsNamespaceResponse(const DescribeRuleGroupsNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRuleGroupsNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRuleGroupsNamespaceResponse)
    Q_DISABLE_COPY(DescribeRuleGroupsNamespaceResponse)

};

} // namespace Amp
} // namespace QtAws

#endif
