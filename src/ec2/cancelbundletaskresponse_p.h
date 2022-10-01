// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBUNDLETASKRESPONSE_P_H
#define QTAWS_CANCELBUNDLETASKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CancelBundleTaskResponse;

class CancelBundleTaskResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CancelBundleTaskResponsePrivate(CancelBundleTaskResponse * const q);

    void parseCancelBundleTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelBundleTaskResponse)
    Q_DISABLE_COPY(CancelBundleTaskResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
