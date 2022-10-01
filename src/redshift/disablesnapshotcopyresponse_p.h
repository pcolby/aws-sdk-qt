// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESNAPSHOTCOPYRESPONSE_P_H
#define QTAWS_DISABLESNAPSHOTCOPYRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DisableSnapshotCopyResponse;

class DisableSnapshotCopyResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DisableSnapshotCopyResponsePrivate(DisableSnapshotCopyResponse * const q);

    void parseDisableSnapshotCopyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableSnapshotCopyResponse)
    Q_DISABLE_COPY(DisableSnapshotCopyResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
