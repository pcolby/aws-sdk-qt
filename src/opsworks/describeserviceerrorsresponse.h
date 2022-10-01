// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEERRORSRESPONSE_H
#define QTAWS_DESCRIBESERVICEERRORSRESPONSE_H

#include "opsworksresponse.h"
#include "describeserviceerrorsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeServiceErrorsResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeServiceErrorsResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeServiceErrorsResponse(const DescribeServiceErrorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeServiceErrorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServiceErrorsResponse)
    Q_DISABLE_COPY(DescribeServiceErrorsResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
