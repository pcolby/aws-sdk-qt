// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFRAMEWORKSRESPONSE_H
#define QTAWS_LISTFRAMEWORKSRESPONSE_H

#include "backupresponse.h"
#include "listframeworksrequest.h"

namespace QtAws {
namespace Backup {

class ListFrameworksResponsePrivate;

class QTAWSBACKUP_EXPORT ListFrameworksResponse : public BackupResponse {
    Q_OBJECT

public:
    ListFrameworksResponse(const ListFrameworksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFrameworksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFrameworksResponse)
    Q_DISABLE_COPY(ListFrameworksResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
