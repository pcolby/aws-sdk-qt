// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOURNALKINESISSTREAMREQUEST_H
#define QTAWS_CANCELJOURNALKINESISSTREAMREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class CancelJournalKinesisStreamRequestPrivate;

class QTAWSQLDB_EXPORT CancelJournalKinesisStreamRequest : public QldbRequest {

public:
    CancelJournalKinesisStreamRequest(const CancelJournalKinesisStreamRequest &other);
    CancelJournalKinesisStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelJournalKinesisStreamRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
