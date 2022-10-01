// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESNAPSHOTTIERRESPONSE_P_H
#define QTAWS_RESTORESNAPSHOTTIERRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RestoreSnapshotTierResponse;

class RestoreSnapshotTierResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RestoreSnapshotTierResponsePrivate(RestoreSnapshotTierResponse * const q);

    void parseRestoreSnapshotTierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreSnapshotTierResponse)
    Q_DISABLE_COPY(RestoreSnapshotTierResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
