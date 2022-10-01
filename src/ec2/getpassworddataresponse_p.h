// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPASSWORDDATARESPONSE_P_H
#define QTAWS_GETPASSWORDDATARESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetPasswordDataResponse;

class GetPasswordDataResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetPasswordDataResponsePrivate(GetPasswordDataResponse * const q);

    void parseGetPasswordDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPasswordDataResponse)
    Q_DISABLE_COPY(GetPasswordDataResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
