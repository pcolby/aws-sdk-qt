// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTJOURNALTOS3REQUEST_H
#define QTAWS_EXPORTJOURNALTOS3REQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class ExportJournalToS3RequestPrivate;

class QTAWSQLDB_EXPORT ExportJournalToS3Request : public QldbRequest {

public:
    ExportJournalToS3Request(const ExportJournalToS3Request &other);
    ExportJournalToS3Request();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportJournalToS3Request)

};

} // namespace Qldb
} // namespace QtAws

#endif
