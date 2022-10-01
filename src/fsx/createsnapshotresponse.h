// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTRESPONSE_H
#define QTAWS_CREATESNAPSHOTRESPONSE_H

#include "fsxresponse.h"
#include "createsnapshotrequest.h"

namespace QtAws {
namespace FSx {

class CreateSnapshotResponsePrivate;

class QTAWSFSX_EXPORT CreateSnapshotResponse : public FSxResponse {
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

} // namespace FSx
} // namespace QtAws

#endif
