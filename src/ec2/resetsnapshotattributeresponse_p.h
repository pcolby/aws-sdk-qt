// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETSNAPSHOTATTRIBUTERESPONSE_P_H
#define QTAWS_RESETSNAPSHOTATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ResetSnapshotAttributeResponse;

class ResetSnapshotAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ResetSnapshotAttributeResponsePrivate(ResetSnapshotAttributeResponse * const q);

    void parseResetSnapshotAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetSnapshotAttributeResponse)
    Q_DISABLE_COPY(ResetSnapshotAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
