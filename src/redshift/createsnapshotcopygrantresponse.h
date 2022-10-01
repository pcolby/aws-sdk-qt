// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTCOPYGRANTRESPONSE_H
#define QTAWS_CREATESNAPSHOTCOPYGRANTRESPONSE_H

#include "redshiftresponse.h"
#include "createsnapshotcopygrantrequest.h"

namespace QtAws {
namespace Redshift {

class CreateSnapshotCopyGrantResponsePrivate;

class QTAWSREDSHIFT_EXPORT CreateSnapshotCopyGrantResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CreateSnapshotCopyGrantResponse(const CreateSnapshotCopyGrantRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSnapshotCopyGrantRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSnapshotCopyGrantResponse)
    Q_DISABLE_COPY(CreateSnapshotCopyGrantResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
