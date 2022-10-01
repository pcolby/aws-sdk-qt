// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULESETREQUEST_H
#define QTAWS_DESCRIBERULESETREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class DescribeRulesetRequestPrivate;

class QTAWSDATABREW_EXPORT DescribeRulesetRequest : public DataBrewRequest {

public:
    DescribeRulesetRequest(const DescribeRulesetRequest &other);
    DescribeRulesetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRulesetRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
