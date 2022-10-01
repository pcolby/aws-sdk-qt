// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAINGESTIONJOBRESPONSE_H
#define QTAWS_DESCRIBEDATAINGESTIONJOBRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "describedataingestionjobrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeDataIngestionJobResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DescribeDataIngestionJobResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    DescribeDataIngestionJobResponse(const DescribeDataIngestionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDataIngestionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataIngestionJobResponse)
    Q_DISABLE_COPY(DescribeDataIngestionJobResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
