// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STREAMJOURNALTOKINESISREQUEST_H
#define QTAWS_STREAMJOURNALTOKINESISREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class StreamJournalToKinesisRequestPrivate;

class QTAWSQLDB_EXPORT StreamJournalToKinesisRequest : public QldbRequest {

public:
    StreamJournalToKinesisRequest(const StreamJournalToKinesisRequest &other);
    StreamJournalToKinesisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StreamJournalToKinesisRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
