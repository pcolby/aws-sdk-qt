// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROGRESSUPDATESTREAMRESPONSE_H
#define QTAWS_DELETEPROGRESSUPDATESTREAMRESPONSE_H

#include "migrationhubresponse.h"
#include "deleteprogressupdatestreamrequest.h"

namespace QtAws {
namespace MigrationHub {

class DeleteProgressUpdateStreamResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT DeleteProgressUpdateStreamResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    DeleteProgressUpdateStreamResponse(const DeleteProgressUpdateStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProgressUpdateStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProgressUpdateStreamResponse)
    Q_DISABLE_COPY(DeleteProgressUpdateStreamResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
