// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTSRESPONSE_H
#define QTAWS_DESCRIBEPROJECTSRESPONSE_H

#include "rekognitionresponse.h"
#include "describeprojectsrequest.h"

namespace QtAws {
namespace Rekognition {

class DescribeProjectsResponsePrivate;

class QTAWSREKOGNITION_EXPORT DescribeProjectsResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DescribeProjectsResponse(const DescribeProjectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProjectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProjectsResponse)
    Q_DISABLE_COPY(DescribeProjectsResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
