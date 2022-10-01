// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSTEPSRESPONSE_P_H
#define QTAWS_CANCELSTEPSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class CancelStepsResponse;

class CancelStepsResponsePrivate : public EmrResponsePrivate {

public:

    explicit CancelStepsResponsePrivate(CancelStepsResponse * const q);

    void parseCancelStepsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelStepsResponse)
    Q_DISABLE_COPY(CancelStepsResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
