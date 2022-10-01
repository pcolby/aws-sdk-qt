// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBNETRESPONSE_P_H
#define QTAWS_DELETESUBNETRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteSubnetResponse;

class DeleteSubnetResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteSubnetResponsePrivate(DeleteSubnetResponse * const q);

    void parseDeleteSubnetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSubnetResponse)
    Q_DISABLE_COPY(DeleteSubnetResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
