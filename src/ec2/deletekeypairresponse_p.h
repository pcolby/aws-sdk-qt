// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYPAIRRESPONSE_P_H
#define QTAWS_DELETEKEYPAIRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteKeyPairResponse;

class DeleteKeyPairResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteKeyPairResponsePrivate(DeleteKeyPairResponse * const q);

    void parseDeleteKeyPairResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteKeyPairResponse)
    Q_DISABLE_COPY(DeleteKeyPairResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
