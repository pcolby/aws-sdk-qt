// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMPRODUCTINSTANCERESPONSE_P_H
#define QTAWS_CONFIRMPRODUCTINSTANCERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ConfirmProductInstanceResponse;

class ConfirmProductInstanceResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ConfirmProductInstanceResponsePrivate(ConfirmProductInstanceResponse * const q);

    void parseConfirmProductInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfirmProductInstanceResponse)
    Q_DISABLE_COPY(ConfirmProductInstanceResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
