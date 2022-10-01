// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGISTRYRESPONSE_H
#define QTAWS_DESCRIBEREGISTRYRESPONSE_H

#include "ecrresponse.h"
#include "describeregistryrequest.h"

namespace QtAws {
namespace Ecr {

class DescribeRegistryResponsePrivate;

class QTAWSECR_EXPORT DescribeRegistryResponse : public EcrResponse {
    Q_OBJECT

public:
    DescribeRegistryResponse(const DescribeRegistryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRegistryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRegistryResponse)
    Q_DISABLE_COPY(DescribeRegistryResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
