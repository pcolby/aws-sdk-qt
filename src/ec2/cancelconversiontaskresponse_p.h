// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCONVERSIONTASKRESPONSE_P_H
#define QTAWS_CANCELCONVERSIONTASKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CancelConversionTaskResponse;

class CancelConversionTaskResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CancelConversionTaskResponsePrivate(CancelConversionTaskResponse * const q);

    void parseCancelConversionTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelConversionTaskResponse)
    Q_DISABLE_COPY(CancelConversionTaskResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
