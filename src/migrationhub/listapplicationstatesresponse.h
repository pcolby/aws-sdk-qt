// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSTATESRESPONSE_H
#define QTAWS_LISTAPPLICATIONSTATESRESPONSE_H

#include "migrationhubresponse.h"
#include "listapplicationstatesrequest.h"

namespace QtAws {
namespace MigrationHub {

class ListApplicationStatesResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT ListApplicationStatesResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    ListApplicationStatesResponse(const ListApplicationStatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApplicationStatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationStatesResponse)
    Q_DISABLE_COPY(ListApplicationStatesResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
