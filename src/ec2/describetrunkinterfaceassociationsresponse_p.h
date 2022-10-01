// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUNKINTERFACEASSOCIATIONSRESPONSE_P_H
#define QTAWS_DESCRIBETRUNKINTERFACEASSOCIATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrunkInterfaceAssociationsResponse;

class DescribeTrunkInterfaceAssociationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeTrunkInterfaceAssociationsResponsePrivate(DescribeTrunkInterfaceAssociationsResponse * const q);

    void parseDescribeTrunkInterfaceAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTrunkInterfaceAssociationsResponse)
    Q_DISABLE_COPY(DescribeTrunkInterfaceAssociationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
