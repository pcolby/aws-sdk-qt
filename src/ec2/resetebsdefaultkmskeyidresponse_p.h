// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETEBSDEFAULTKMSKEYIDRESPONSE_P_H
#define QTAWS_RESETEBSDEFAULTKMSKEYIDRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ResetEbsDefaultKmsKeyIdResponse;

class ResetEbsDefaultKmsKeyIdResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ResetEbsDefaultKmsKeyIdResponsePrivate(ResetEbsDefaultKmsKeyIdResponse * const q);

    void parseResetEbsDefaultKmsKeyIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetEbsDefaultKmsKeyIdResponse)
    Q_DISABLE_COPY(ResetEbsDefaultKmsKeyIdResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
