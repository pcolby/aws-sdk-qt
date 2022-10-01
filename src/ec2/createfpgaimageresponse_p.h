// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFPGAIMAGERESPONSE_P_H
#define QTAWS_CREATEFPGAIMAGERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateFpgaImageResponse;

class CreateFpgaImageResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateFpgaImageResponsePrivate(CreateFpgaImageResponse * const q);

    void parseCreateFpgaImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFpgaImageResponse)
    Q_DISABLE_COPY(CreateFpgaImageResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
