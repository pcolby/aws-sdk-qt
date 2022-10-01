// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEBSDEFAULTKMSKEYIDRESPONSE_P_H
#define QTAWS_GETEBSDEFAULTKMSKEYIDRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetEbsDefaultKmsKeyIdResponse;

class GetEbsDefaultKmsKeyIdResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetEbsDefaultKmsKeyIdResponsePrivate(GetEbsDefaultKmsKeyIdResponse * const q);

    void parseGetEbsDefaultKmsKeyIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEbsDefaultKmsKeyIdResponse)
    Q_DISABLE_COPY(GetEbsDefaultKmsKeyIdResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
