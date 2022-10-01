// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCREATEDARTIFACTSRESPONSE_H
#define QTAWS_LISTCREATEDARTIFACTSRESPONSE_H

#include "migrationhubresponse.h"
#include "listcreatedartifactsrequest.h"

namespace QtAws {
namespace MigrationHub {

class ListCreatedArtifactsResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT ListCreatedArtifactsResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    ListCreatedArtifactsResponse(const ListCreatedArtifactsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCreatedArtifactsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCreatedArtifactsResponse)
    Q_DISABLE_COPY(ListCreatedArtifactsResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
