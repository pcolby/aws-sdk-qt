// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFPGAIMAGERESPONSE_P_H
#define QTAWS_DELETEFPGAIMAGERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteFpgaImageResponse;

class DeleteFpgaImageResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteFpgaImageResponsePrivate(DeleteFpgaImageResponse * const q);

    void parseDeleteFpgaImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFpgaImageResponse)
    Q_DISABLE_COPY(DeleteFpgaImageResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
