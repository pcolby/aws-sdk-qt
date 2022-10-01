// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULESPACKAGESREQUEST_H
#define QTAWS_DESCRIBERULESPACKAGESREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeRulesPackagesRequestPrivate;

class QTAWSINSPECTOR_EXPORT DescribeRulesPackagesRequest : public InspectorRequest {

public:
    DescribeRulesPackagesRequest(const DescribeRulesPackagesRequest &other);
    DescribeRulesPackagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRulesPackagesRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
