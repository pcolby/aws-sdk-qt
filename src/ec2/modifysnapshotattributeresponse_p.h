// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSNAPSHOTATTRIBUTERESPONSE_P_H
#define QTAWS_MODIFYSNAPSHOTATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifySnapshotAttributeResponse;

class ModifySnapshotAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifySnapshotAttributeResponsePrivate(ModifySnapshotAttributeResponse * const q);

    void parseModifySnapshotAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifySnapshotAttributeResponse)
    Q_DISABLE_COPY(ModifySnapshotAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
