// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODEASSOCIATIONSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBENODEASSOCIATIONSTATUSRESPONSE_P_H

#include "opsworkscmresponse_p.h"

namespace QtAws {
namespace OpsWorksCm {

class DescribeNodeAssociationStatusResponse;

class DescribeNodeAssociationStatusResponsePrivate : public OpsWorksCmResponsePrivate {

public:

    explicit DescribeNodeAssociationStatusResponsePrivate(DescribeNodeAssociationStatusResponse * const q);

    void parseDescribeNodeAssociationStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNodeAssociationStatusResponse)
    Q_DISABLE_COPY(DescribeNodeAssociationStatusResponsePrivate)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
