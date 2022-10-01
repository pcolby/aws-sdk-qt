// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETRESPONSE_H
#define QTAWS_DESCRIBEDATASETRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "describedatasetrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeDatasetResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DescribeDatasetResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    DescribeDatasetResponse(const DescribeDatasetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDatasetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatasetResponse)
    Q_DISABLE_COPY(DescribeDatasetResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
