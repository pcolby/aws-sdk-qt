// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERIMAGERESPONSE_P_H
#define QTAWS_REGISTERIMAGERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RegisterImageResponse;

class RegisterImageResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RegisterImageResponsePrivate(RegisterImageResponse * const q);

    void parseRegisterImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterImageResponse)
    Q_DISABLE_COPY(RegisterImageResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
