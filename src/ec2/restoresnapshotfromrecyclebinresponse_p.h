// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESNAPSHOTFROMRECYCLEBINRESPONSE_P_H
#define QTAWS_RESTORESNAPSHOTFROMRECYCLEBINRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RestoreSnapshotFromRecycleBinResponse;

class RestoreSnapshotFromRecycleBinResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RestoreSnapshotFromRecycleBinResponsePrivate(RestoreSnapshotFromRecycleBinResponse * const q);

    void parseRestoreSnapshotFromRecycleBinResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreSnapshotFromRecycleBinResponse)
    Q_DISABLE_COPY(RestoreSnapshotFromRecycleBinResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
