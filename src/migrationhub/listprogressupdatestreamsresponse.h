// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROGRESSUPDATESTREAMSRESPONSE_H
#define QTAWS_LISTPROGRESSUPDATESTREAMSRESPONSE_H

#include "migrationhubresponse.h"
#include "listprogressupdatestreamsrequest.h"

namespace QtAws {
namespace MigrationHub {

class ListProgressUpdateStreamsResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT ListProgressUpdateStreamsResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    ListProgressUpdateStreamsResponse(const ListProgressUpdateStreamsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProgressUpdateStreamsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProgressUpdateStreamsResponse)
    Q_DISABLE_COPY(ListProgressUpdateStreamsResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
