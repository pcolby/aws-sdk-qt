// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECERTIFICATERESPONSE_P_H
#define QTAWS_DELETECERTIFICATERESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteCertificateResponse;

class DeleteCertificateResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DeleteCertificateResponsePrivate(DeleteCertificateResponse * const q);

    void parseDeleteCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCertificateResponse)
    Q_DISABLE_COPY(DeleteCertificateResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
