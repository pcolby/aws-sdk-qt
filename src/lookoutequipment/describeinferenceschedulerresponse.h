// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINFERENCESCHEDULERRESPONSE_H
#define QTAWS_DESCRIBEINFERENCESCHEDULERRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "describeinferenceschedulerrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeInferenceSchedulerResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DescribeInferenceSchedulerResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    DescribeInferenceSchedulerResponse(const DescribeInferenceSchedulerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInferenceSchedulerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInferenceSchedulerResponse)
    Q_DISABLE_COPY(DescribeInferenceSchedulerResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
