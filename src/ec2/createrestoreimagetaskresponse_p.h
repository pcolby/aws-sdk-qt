// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESTOREIMAGETASKRESPONSE_P_H
#define QTAWS_CREATERESTOREIMAGETASKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateRestoreImageTaskResponse;

class CreateRestoreImageTaskResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateRestoreImageTaskResponsePrivate(CreateRestoreImageTaskResponse * const q);

    void parseCreateRestoreImageTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRestoreImageTaskResponse)
    Q_DISABLE_COPY(CreateRestoreImageTaskResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
