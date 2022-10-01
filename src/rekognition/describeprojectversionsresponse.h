// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTVERSIONSRESPONSE_H
#define QTAWS_DESCRIBEPROJECTVERSIONSRESPONSE_H

#include "rekognitionresponse.h"
#include "describeprojectversionsrequest.h"

namespace QtAws {
namespace Rekognition {

class DescribeProjectVersionsResponsePrivate;

class QTAWSREKOGNITION_EXPORT DescribeProjectVersionsResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DescribeProjectVersionsResponse(const DescribeProjectVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProjectVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProjectVersionsResponse)
    Q_DISABLE_COPY(DescribeProjectVersionsResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
