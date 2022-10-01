// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPRESPONSE_H
#define QTAWS_DESCRIBEAPPRESPONSE_H

#include "resiliencehubresponse.h"
#include "describeapprequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT DescribeAppResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    DescribeAppResponse(const DescribeAppRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAppRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppResponse)
    Q_DISABLE_COPY(DescribeAppResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
