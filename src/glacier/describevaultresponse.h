// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVAULTRESPONSE_H
#define QTAWS_DESCRIBEVAULTRESPONSE_H

#include "glacierresponse.h"
#include "describevaultrequest.h"

namespace QtAws {
namespace Glacier {

class DescribeVaultResponsePrivate;

class QTAWSGLACIER_EXPORT DescribeVaultResponse : public GlacierResponse {
    Q_OBJECT

public:
    DescribeVaultResponse(const DescribeVaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVaultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVaultResponse)
    Q_DISABLE_COPY(DescribeVaultResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
