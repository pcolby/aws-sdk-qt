// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYPAIRSRESPONSE_H
#define QTAWS_DESCRIBEKEYPAIRSRESPONSE_H

#include "ec2response.h"
#include "describekeypairsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeKeyPairsResponsePrivate;

class QTAWSEC2_EXPORT DescribeKeyPairsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeKeyPairsResponse(const DescribeKeyPairsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeKeyPairsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeKeyPairsResponse)
    Q_DISABLE_COPY(DescribeKeyPairsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
