// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPERIENCEREQUEST_H
#define QTAWS_DESCRIBEEXPERIENCEREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class DescribeExperienceRequestPrivate;

class QTAWSKENDRA_EXPORT DescribeExperienceRequest : public KendraRequest {

public:
    DescribeExperienceRequest(const DescribeExperienceRequest &other);
    DescribeExperienceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExperienceRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
