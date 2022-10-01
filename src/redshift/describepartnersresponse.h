// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARTNERSRESPONSE_H
#define QTAWS_DESCRIBEPARTNERSRESPONSE_H

#include "redshiftresponse.h"
#include "describepartnersrequest.h"

namespace QtAws {
namespace Redshift {

class DescribePartnersResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribePartnersResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribePartnersResponse(const DescribePartnersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePartnersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePartnersResponse)
    Q_DISABLE_COPY(DescribePartnersResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
