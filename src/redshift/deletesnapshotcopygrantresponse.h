// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTCOPYGRANTRESPONSE_H
#define QTAWS_DELETESNAPSHOTCOPYGRANTRESPONSE_H

#include "redshiftresponse.h"
#include "deletesnapshotcopygrantrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteSnapshotCopyGrantResponsePrivate;

class QTAWSREDSHIFT_EXPORT DeleteSnapshotCopyGrantResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DeleteSnapshotCopyGrantResponse(const DeleteSnapshotCopyGrantRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSnapshotCopyGrantRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSnapshotCopyGrantResponse)
    Q_DISABLE_COPY(DeleteSnapshotCopyGrantResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
