// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSNAPSHOTTIERRESPONSE_P_H
#define QTAWS_MODIFYSNAPSHOTTIERRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifySnapshotTierResponse;

class ModifySnapshotTierResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifySnapshotTierResponsePrivate(ModifySnapshotTierResponse * const q);

    void parseModifySnapshotTierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifySnapshotTierResponse)
    Q_DISABLE_COPY(ModifySnapshotTierResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
