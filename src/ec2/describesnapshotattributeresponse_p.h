// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTATTRIBUTERESPONSE_P_H
#define QTAWS_DESCRIBESNAPSHOTATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeSnapshotAttributeResponse;

class DescribeSnapshotAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeSnapshotAttributeResponsePrivate(DescribeSnapshotAttributeResponse * const q);

    void parseDescribeSnapshotAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotAttributeResponse)
    Q_DISABLE_COPY(DescribeSnapshotAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
