// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSREQUEST_H
#define QTAWS_DESCRIBEEVENTSREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeEventsRequestPrivate;

class QTAWSDOCDB_EXPORT DescribeEventsRequest : public DocDbRequest {

public:
    DescribeEventsRequest(const DescribeEventsRequest &other);
    DescribeEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventsRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
