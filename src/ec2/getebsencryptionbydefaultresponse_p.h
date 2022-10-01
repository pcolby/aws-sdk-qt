// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEBSENCRYPTIONBYDEFAULTRESPONSE_P_H
#define QTAWS_GETEBSENCRYPTIONBYDEFAULTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetEbsEncryptionByDefaultResponse;

class GetEbsEncryptionByDefaultResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetEbsEncryptionByDefaultResponsePrivate(GetEbsEncryptionByDefaultResponse * const q);

    void parseGetEbsEncryptionByDefaultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEbsEncryptionByDefaultResponse)
    Q_DISABLE_COPY(GetEbsEncryptionByDefaultResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
