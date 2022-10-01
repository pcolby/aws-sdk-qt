// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROGRESSUPDATESTREAMRESPONSE_H
#define QTAWS_CREATEPROGRESSUPDATESTREAMRESPONSE_H

#include "migrationhubresponse.h"
#include "createprogressupdatestreamrequest.h"

namespace QtAws {
namespace MigrationHub {

class CreateProgressUpdateStreamResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT CreateProgressUpdateStreamResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    CreateProgressUpdateStreamResponse(const CreateProgressUpdateStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProgressUpdateStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProgressUpdateStreamResponse)
    Q_DISABLE_COPY(CreateProgressUpdateStreamResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
