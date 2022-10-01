// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIDFORMATRESPONSE_P_H
#define QTAWS_MODIFYIDFORMATRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyIdFormatResponse;

class ModifyIdFormatResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyIdFormatResponsePrivate(ModifyIdFormatResponse * const q);

    void parseModifyIdFormatResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyIdFormatResponse)
    Q_DISABLE_COPY(ModifyIdFormatResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
