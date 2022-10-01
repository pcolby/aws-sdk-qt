// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYREQUEST_H
#define QTAWS_DESCRIBEANOMALYREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeAnomalyRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeAnomalyRequest : public DevOpsGuruRequest {

public:
    DescribeAnomalyRequest(const DescribeAnomalyRequest &other);
    DescribeAnomalyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAnomalyRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
