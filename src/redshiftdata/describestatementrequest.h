// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTATEMENTREQUEST_H
#define QTAWS_DESCRIBESTATEMENTREQUEST_H

#include "redshiftdatarequest.h"

namespace QtAws {
namespace RedshiftData {

class DescribeStatementRequestPrivate;

class QTAWSREDSHIFTDATA_EXPORT DescribeStatementRequest : public RedshiftDataRequest {

public:
    DescribeStatementRequest(const DescribeStatementRequest &other);
    DescribeStatementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStatementRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
