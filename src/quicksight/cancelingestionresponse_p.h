// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELINGESTIONRESPONSE_P_H
#define QTAWS_CANCELINGESTIONRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class CancelIngestionResponse;

class CancelIngestionResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit CancelIngestionResponsePrivate(CancelIngestionResponse * const q);

    void parseCancelIngestionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelIngestionResponse)
    Q_DISABLE_COPY(CancelIngestionResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
