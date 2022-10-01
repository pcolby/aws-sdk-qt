// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROGRESSUPDATESTREAMREQUEST_H
#define QTAWS_CREATEPROGRESSUPDATESTREAMREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class CreateProgressUpdateStreamRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT CreateProgressUpdateStreamRequest : public MigrationHubRequest {

public:
    CreateProgressUpdateStreamRequest(const CreateProgressUpdateStreamRequest &other);
    CreateProgressUpdateStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProgressUpdateStreamRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
