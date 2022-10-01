// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESNAPSHOTCOPYRESPONSE_P_H
#define QTAWS_ENABLESNAPSHOTCOPYRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class EnableSnapshotCopyResponse;

class EnableSnapshotCopyResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit EnableSnapshotCopyResponsePrivate(EnableSnapshotCopyResponse * const q);

    void parseEnableSnapshotCopyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableSnapshotCopyResponse)
    Q_DISABLE_COPY(EnableSnapshotCopyResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
