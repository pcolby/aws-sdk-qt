// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTATTRIBUTESRESPONSE_H
#define QTAWS_DESCRIBEACCOUNTATTRIBUTESRESPONSE_H

#include "opsworkscmresponse.h"
#include "describeaccountattributesrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DescribeAccountAttributesResponsePrivate;

class QTAWSOPSWORKSCM_EXPORT DescribeAccountAttributesResponse : public OpsWorksCmResponse {
    Q_OBJECT

public:
    DescribeAccountAttributesResponse(const DescribeAccountAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccountAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountAttributesResponse)
    Q_DISABLE_COPY(DescribeAccountAttributesResponse)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
