// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESNAPSHOTCOPYRESPONSE_H
#define QTAWS_DISABLESNAPSHOTCOPYRESPONSE_H

#include "redshiftresponse.h"
#include "disablesnapshotcopyrequest.h"

namespace QtAws {
namespace Redshift {

class DisableSnapshotCopyResponsePrivate;

class QTAWSREDSHIFT_EXPORT DisableSnapshotCopyResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DisableSnapshotCopyResponse(const DisableSnapshotCopyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableSnapshotCopyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableSnapshotCopyResponse)
    Q_DISABLE_COPY(DisableSnapshotCopyResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
