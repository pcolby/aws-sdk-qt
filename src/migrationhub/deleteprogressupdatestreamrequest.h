// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROGRESSUPDATESTREAMREQUEST_H
#define QTAWS_DELETEPROGRESSUPDATESTREAMREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class DeleteProgressUpdateStreamRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT DeleteProgressUpdateStreamRequest : public MigrationHubRequest {

public:
    DeleteProgressUpdateStreamRequest(const DeleteProgressUpdateStreamRequest &other);
    DeleteProgressUpdateStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProgressUpdateStreamRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
