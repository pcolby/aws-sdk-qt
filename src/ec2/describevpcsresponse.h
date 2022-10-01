// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCSRESPONSE_H
#define QTAWS_DESCRIBEVPCSRESPONSE_H

#include "ec2response.h"
#include "describevpcsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcsResponsePrivate;

class QTAWSEC2_EXPORT DescribeVpcsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVpcsResponse(const DescribeVpcsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpcsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcsResponse)
    Q_DISABLE_COPY(DescribeVpcsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
