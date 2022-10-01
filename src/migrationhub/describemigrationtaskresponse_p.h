// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMIGRATIONTASKRESPONSE_P_H
#define QTAWS_DESCRIBEMIGRATIONTASKRESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class DescribeMigrationTaskResponse;

class DescribeMigrationTaskResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit DescribeMigrationTaskResponsePrivate(DescribeMigrationTaskResponse * const q);

    void parseDescribeMigrationTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMigrationTaskResponse)
    Q_DISABLE_COPY(DescribeMigrationTaskResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
