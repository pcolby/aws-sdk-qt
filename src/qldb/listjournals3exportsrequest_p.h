// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNALS3EXPORTSREQUEST_P_H
#define QTAWS_LISTJOURNALS3EXPORTSREQUEST_P_H

#include "qldbrequest_p.h"
#include "listjournals3exportsrequest.h"

namespace QtAws {
namespace Qldb {

class ListJournalS3ExportsRequest;

class ListJournalS3ExportsRequestPrivate : public QldbRequestPrivate {

public:
    ListJournalS3ExportsRequestPrivate(const QldbRequest::Action action,
                                   ListJournalS3ExportsRequest * const q);
    ListJournalS3ExportsRequestPrivate(const ListJournalS3ExportsRequestPrivate &other,
                                   ListJournalS3ExportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListJournalS3ExportsRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
