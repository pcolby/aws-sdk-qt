// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESNAPSHOTCOPYRESPONSE_H
#define QTAWS_ENABLESNAPSHOTCOPYRESPONSE_H

#include "redshiftresponse.h"
#include "enablesnapshotcopyrequest.h"

namespace QtAws {
namespace Redshift {

class EnableSnapshotCopyResponsePrivate;

class QTAWSREDSHIFT_EXPORT EnableSnapshotCopyResponse : public RedshiftResponse {
    Q_OBJECT

public:
    EnableSnapshotCopyResponse(const EnableSnapshotCopyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableSnapshotCopyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableSnapshotCopyResponse)
    Q_DISABLE_COPY(EnableSnapshotCopyResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
