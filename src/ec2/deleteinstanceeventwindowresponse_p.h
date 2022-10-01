// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEEVENTWINDOWRESPONSE_P_H
#define QTAWS_DELETEINSTANCEEVENTWINDOWRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteInstanceEventWindowResponse;

class DeleteInstanceEventWindowResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteInstanceEventWindowResponsePrivate(DeleteInstanceEventWindowResponse * const q);

    void parseDeleteInstanceEventWindowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceEventWindowResponse)
    Q_DISABLE_COPY(DeleteInstanceEventWindowResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
