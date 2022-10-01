// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTJOURNALTOS3REQUEST_P_H
#define QTAWS_EXPORTJOURNALTOS3REQUEST_P_H

#include "qldbrequest_p.h"
#include "exportjournaltos3request.h"

namespace QtAws {
namespace Qldb {

class ExportJournalToS3Request;

class ExportJournalToS3RequestPrivate : public QldbRequestPrivate {

public:
    ExportJournalToS3RequestPrivate(const QldbRequest::Action action,
                                   ExportJournalToS3Request * const q);
    ExportJournalToS3RequestPrivate(const ExportJournalToS3RequestPrivate &other,
                                   ExportJournalToS3Request * const q);

private:
    Q_DECLARE_PUBLIC(ExportJournalToS3Request)

};

} // namespace Qldb
} // namespace QtAws

#endif
