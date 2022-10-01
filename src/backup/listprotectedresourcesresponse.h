// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTECTEDRESOURCESRESPONSE_H
#define QTAWS_LISTPROTECTEDRESOURCESRESPONSE_H

#include "backupresponse.h"
#include "listprotectedresourcesrequest.h"

namespace QtAws {
namespace Backup {

class ListProtectedResourcesResponsePrivate;

class QTAWSBACKUP_EXPORT ListProtectedResourcesResponse : public BackupResponse {
    Q_OBJECT

public:
    ListProtectedResourcesResponse(const ListProtectedResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProtectedResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProtectedResourcesResponse)
    Q_DISABLE_COPY(ListProtectedResourcesResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
