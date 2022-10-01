// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOURNALKINESISSTREAMREQUEST_H
#define QTAWS_DESCRIBEJOURNALKINESISSTREAMREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class DescribeJournalKinesisStreamRequestPrivate;

class QTAWSQLDB_EXPORT DescribeJournalKinesisStreamRequest : public QldbRequest {

public:
    DescribeJournalKinesisStreamRequest(const DescribeJournalKinesisStreamRequest &other);
    DescribeJournalKinesisStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJournalKinesisStreamRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
