// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTHEALTHREQUEST_H
#define QTAWS_DESCRIBEACCOUNTHEALTHREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeAccountHealthRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeAccountHealthRequest : public DevOpsGuruRequest {

public:
    DescribeAccountHealthRequest(const DescribeAccountHealthRequest &other);
    DescribeAccountHealthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountHealthRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
