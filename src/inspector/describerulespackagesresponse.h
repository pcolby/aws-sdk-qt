// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULESPACKAGESRESPONSE_H
#define QTAWS_DESCRIBERULESPACKAGESRESPONSE_H

#include "inspectorresponse.h"
#include "describerulespackagesrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeRulesPackagesResponsePrivate;

class QTAWSINSPECTOR_EXPORT DescribeRulesPackagesResponse : public InspectorResponse {
    Q_OBJECT

public:
    DescribeRulesPackagesResponse(const DescribeRulesPackagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRulesPackagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRulesPackagesResponse)
    Q_DISABLE_COPY(DescribeRulesPackagesResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
