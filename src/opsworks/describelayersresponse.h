// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAYERSRESPONSE_H
#define QTAWS_DESCRIBELAYERSRESPONSE_H

#include "opsworksresponse.h"
#include "describelayersrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeLayersResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeLayersResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeLayersResponse(const DescribeLayersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLayersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLayersResponse)
    Q_DISABLE_COPY(DescribeLayersResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
