// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINFERENCESCHEDULERRESPONSE_P_H
#define QTAWS_DESCRIBEINFERENCESCHEDULERRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeInferenceSchedulerResponse;

class DescribeInferenceSchedulerResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit DescribeInferenceSchedulerResponsePrivate(DescribeInferenceSchedulerResponse * const q);

    void parseDescribeInferenceSchedulerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInferenceSchedulerResponse)
    Q_DISABLE_COPY(DescribeInferenceSchedulerResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
