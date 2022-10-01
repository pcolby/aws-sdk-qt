// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNAPSHOTSRESPONSE_H
#define QTAWS_LISTSNAPSHOTSRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "listsnapshotsrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ListSnapshotsResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT ListSnapshotsResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    ListSnapshotsResponse(const ListSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSnapshotsResponse)
    Q_DISABLE_COPY(ListSnapshotsResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
