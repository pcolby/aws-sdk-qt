// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNALS3EXPORTSREQUEST_H
#define QTAWS_LISTJOURNALS3EXPORTSREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class ListJournalS3ExportsRequestPrivate;

class QTAWSQLDB_EXPORT ListJournalS3ExportsRequest : public QldbRequest {

public:
    ListJournalS3ExportsRequest(const ListJournalS3ExportsRequest &other);
    ListJournalS3ExportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJournalS3ExportsRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
