// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYEBSDEFAULTKMSKEYIDRESPONSE_P_H
#define QTAWS_MODIFYEBSDEFAULTKMSKEYIDRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyEbsDefaultKmsKeyIdResponse;

class ModifyEbsDefaultKmsKeyIdResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyEbsDefaultKmsKeyIdResponsePrivate(ModifyEbsDefaultKmsKeyIdResponse * const q);

    void parseModifyEbsDefaultKmsKeyIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyEbsDefaultKmsKeyIdResponse)
    Q_DISABLE_COPY(ModifyEbsDefaultKmsKeyIdResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
