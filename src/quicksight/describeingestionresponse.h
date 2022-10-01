// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINGESTIONRESPONSE_H
#define QTAWS_DESCRIBEINGESTIONRESPONSE_H

#include "quicksightresponse.h"
#include "describeingestionrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeIngestionResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeIngestionResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeIngestionResponse(const DescribeIngestionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIngestionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIngestionResponse)
    Q_DISABLE_COPY(DescribeIngestionResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
