// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEINSTANCEEVENTWINDOWRESPONSE_P_H
#define QTAWS_ASSOCIATEINSTANCEEVENTWINDOWRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssociateInstanceEventWindowResponse;

class AssociateInstanceEventWindowResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssociateInstanceEventWindowResponsePrivate(AssociateInstanceEventWindowResponse * const q);

    void parseAssociateInstanceEventWindowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateInstanceEventWindowResponse)
    Q_DISABLE_COPY(AssociateInstanceEventWindowResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
