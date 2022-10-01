// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESNAPSHOTACCESSRESPONSE_P_H
#define QTAWS_REVOKESNAPSHOTACCESSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class RevokeSnapshotAccessResponse;

class RevokeSnapshotAccessResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit RevokeSnapshotAccessResponsePrivate(RevokeSnapshotAccessResponse * const q);

    void parseRevokeSnapshotAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeSnapshotAccessResponse)
    Q_DISABLE_COPY(RevokeSnapshotAccessResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
