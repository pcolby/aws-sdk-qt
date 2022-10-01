// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELVERSIONSRESPONSE_H
#define QTAWS_DESCRIBEMODELVERSIONSRESPONSE_H

#include "frauddetectorresponse.h"
#include "describemodelversionsrequest.h"

namespace QtAws {
namespace FraudDetector {

class DescribeModelVersionsResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT DescribeModelVersionsResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    DescribeModelVersionsResponse(const DescribeModelVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeModelVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeModelVersionsResponse)
    Q_DISABLE_COPY(DescribeModelVersionsResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
