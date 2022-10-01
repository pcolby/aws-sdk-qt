// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETESNAPSHOTRESPONSE_P_H
#define QTAWS_COMPLETESNAPSHOTRESPONSE_P_H

#include "ebsresponse_p.h"

namespace QtAws {
namespace Ebs {

class CompleteSnapshotResponse;

class CompleteSnapshotResponsePrivate : public EbsResponsePrivate {

public:

    explicit CompleteSnapshotResponsePrivate(CompleteSnapshotResponse * const q);

    void parseCompleteSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CompleteSnapshotResponse)
    Q_DISABLE_COPY(CompleteSnapshotResponsePrivate)

};

} // namespace Ebs
} // namespace QtAws

#endif
