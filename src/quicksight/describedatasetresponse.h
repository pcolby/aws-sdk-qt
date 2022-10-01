// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETRESPONSE_H
#define QTAWS_DESCRIBEDATASETRESPONSE_H

#include "quicksightresponse.h"
#include "describedatasetrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSetResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeDataSetResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeDataSetResponse(const DescribeDataSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDataSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSetResponse)
    Q_DISABLE_COPY(DescribeDataSetResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
