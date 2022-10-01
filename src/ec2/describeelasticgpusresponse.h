// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICGPUSRESPONSE_H
#define QTAWS_DESCRIBEELASTICGPUSRESPONSE_H

#include "ec2response.h"
#include "describeelasticgpusrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeElasticGpusResponsePrivate;

class QTAWSEC2_EXPORT DescribeElasticGpusResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeElasticGpusResponse(const DescribeElasticGpusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeElasticGpusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeElasticGpusResponse)
    Q_DISABLE_COPY(DescribeElasticGpusResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
