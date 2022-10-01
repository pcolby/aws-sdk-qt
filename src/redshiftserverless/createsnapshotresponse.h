// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTRESPONSE_H
#define QTAWS_CREATESNAPSHOTRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "createsnapshotrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateSnapshotResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT CreateSnapshotResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    CreateSnapshotResponse(const CreateSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSnapshotResponse)
    Q_DISABLE_COPY(CreateSnapshotResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
