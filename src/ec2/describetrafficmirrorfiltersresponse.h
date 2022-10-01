// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAFFICMIRRORFILTERSRESPONSE_H
#define QTAWS_DESCRIBETRAFFICMIRRORFILTERSRESPONSE_H

#include "ec2response.h"
#include "describetrafficmirrorfiltersrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrafficMirrorFiltersResponsePrivate;

class QTAWSEC2_EXPORT DescribeTrafficMirrorFiltersResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeTrafficMirrorFiltersResponse(const DescribeTrafficMirrorFiltersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrafficMirrorFiltersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrafficMirrorFiltersResponse)
    Q_DISABLE_COPY(DescribeTrafficMirrorFiltersResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
