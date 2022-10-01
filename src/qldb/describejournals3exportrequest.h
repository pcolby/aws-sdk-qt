// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOURNALS3EXPORTREQUEST_H
#define QTAWS_DESCRIBEJOURNALS3EXPORTREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class DescribeJournalS3ExportRequestPrivate;

class QTAWSQLDB_EXPORT DescribeJournalS3ExportRequest : public QldbRequest {

public:
    DescribeJournalS3ExportRequest(const DescribeJournalS3ExportRequest &other);
    DescribeJournalS3ExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJournalS3ExportRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
