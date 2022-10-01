// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONVERTRECOVERYPOINTTOSNAPSHOTRESPONSE_P_H
#define QTAWS_CONVERTRECOVERYPOINTTOSNAPSHOTRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class ConvertRecoveryPointToSnapshotResponse;

class ConvertRecoveryPointToSnapshotResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit ConvertRecoveryPointToSnapshotResponsePrivate(ConvertRecoveryPointToSnapshotResponse * const q);

    void parseConvertRecoveryPointToSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConvertRecoveryPointToSnapshotResponse)
    Q_DISABLE_COPY(ConvertRecoveryPointToSnapshotResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
