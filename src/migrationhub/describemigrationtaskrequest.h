// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMIGRATIONTASKREQUEST_H
#define QTAWS_DESCRIBEMIGRATIONTASKREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class DescribeMigrationTaskRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT DescribeMigrationTaskRequest : public MigrationHubRequest {

public:
    DescribeMigrationTaskRequest(const DescribeMigrationTaskRequest &other);
    DescribeMigrationTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMigrationTaskRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
