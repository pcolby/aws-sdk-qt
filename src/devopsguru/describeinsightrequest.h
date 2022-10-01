// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSIGHTREQUEST_H
#define QTAWS_DESCRIBEINSIGHTREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeInsightRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeInsightRequest : public DevOpsGuruRequest {

public:
    DescribeInsightRequest(const DescribeInsightRequest &other);
    DescribeInsightRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInsightRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
