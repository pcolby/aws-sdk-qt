// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDFORMATRESPONSE_H
#define QTAWS_DESCRIBEIDFORMATRESPONSE_H

#include "ec2response.h"
#include "describeidformatrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeIdFormatResponsePrivate;

class QTAWSEC2_EXPORT DescribeIdFormatResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeIdFormatResponse(const DescribeIdFormatRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIdFormatRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdFormatResponse)
    Q_DISABLE_COPY(DescribeIdFormatResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
