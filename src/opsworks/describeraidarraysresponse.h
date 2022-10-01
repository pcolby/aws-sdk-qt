// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERAIDARRAYSRESPONSE_H
#define QTAWS_DESCRIBERAIDARRAYSRESPONSE_H

#include "opsworksresponse.h"
#include "describeraidarraysrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeRaidArraysResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeRaidArraysResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeRaidArraysResponse(const DescribeRaidArraysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRaidArraysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRaidArraysResponse)
    Q_DISABLE_COPY(DescribeRaidArraysResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
