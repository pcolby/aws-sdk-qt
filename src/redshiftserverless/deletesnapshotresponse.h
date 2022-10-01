// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTRESPONSE_H
#define QTAWS_DELETESNAPSHOTRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "deletesnapshotrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class DeleteSnapshotResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT DeleteSnapshotResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    DeleteSnapshotResponse(const DeleteSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSnapshotResponse)
    Q_DISABLE_COPY(DeleteSnapshotResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
