// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERIMAGERESPONSE_P_H
#define QTAWS_DEREGISTERIMAGERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeregisterImageResponse;

class DeregisterImageResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeregisterImageResponsePrivate(DeregisterImageResponse * const q);

    void parseDeregisterImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterImageResponse)
    Q_DISABLE_COPY(DeregisterImageResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
