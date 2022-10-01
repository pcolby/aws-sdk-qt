// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTEPSRESPONSE_P_H
#define QTAWS_LISTSTEPSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class ListStepsResponse;

class ListStepsResponsePrivate : public EmrResponsePrivate {

public:

    explicit ListStepsResponsePrivate(ListStepsResponse * const q);

    void parseListStepsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStepsResponse)
    Q_DISABLE_COPY(ListStepsResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
