// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMIGRATIONTASKRESPONSE_H
#define QTAWS_DESCRIBEMIGRATIONTASKRESPONSE_H

#include "migrationhubresponse.h"
#include "describemigrationtaskrequest.h"

namespace QtAws {
namespace MigrationHub {

class DescribeMigrationTaskResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT DescribeMigrationTaskResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    DescribeMigrationTaskResponse(const DescribeMigrationTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMigrationTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMigrationTaskResponse)
    Q_DISABLE_COPY(DescribeMigrationTaskResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
