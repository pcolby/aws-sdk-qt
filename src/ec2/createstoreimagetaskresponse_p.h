// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTOREIMAGETASKRESPONSE_P_H
#define QTAWS_CREATESTOREIMAGETASKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateStoreImageTaskResponse;

class CreateStoreImageTaskResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateStoreImageTaskResponsePrivate(CreateStoreImageTaskResponse * const q);

    void parseCreateStoreImageTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStoreImageTaskResponse)
    Q_DISABLE_COPY(CreateStoreImageTaskResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
