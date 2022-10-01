// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONVERTRECOVERYPOINTTOSNAPSHOTRESPONSE_H
#define QTAWS_CONVERTRECOVERYPOINTTOSNAPSHOTRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "convertrecoverypointtosnapshotrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ConvertRecoveryPointToSnapshotResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT ConvertRecoveryPointToSnapshotResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    ConvertRecoveryPointToSnapshotResponse(const ConvertRecoveryPointToSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConvertRecoveryPointToSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConvertRecoveryPointToSnapshotResponse)
    Q_DISABLE_COPY(ConvertRecoveryPointToSnapshotResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
