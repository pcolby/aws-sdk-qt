// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEMETADATAOPTIONSRESPONSE_P_H
#define QTAWS_MODIFYINSTANCEMETADATAOPTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceMetadataOptionsResponse;

class ModifyInstanceMetadataOptionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyInstanceMetadataOptionsResponsePrivate(ModifyInstanceMetadataOptionsResponse * const q);

    void parseModifyInstanceMetadataOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceMetadataOptionsResponse)
    Q_DISABLE_COPY(ModifyInstanceMetadataOptionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
