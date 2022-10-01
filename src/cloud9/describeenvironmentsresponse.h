// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTSRESPONSE_H
#define QTAWS_DESCRIBEENVIRONMENTSRESPONSE_H

#include "cloud9response.h"
#include "describeenvironmentsrequest.h"

namespace QtAws {
namespace Cloud9 {

class DescribeEnvironmentsResponsePrivate;

class QTAWSCLOUD9_EXPORT DescribeEnvironmentsResponse : public Cloud9Response {
    Q_OBJECT

public:
    DescribeEnvironmentsResponse(const DescribeEnvironmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEnvironmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentsResponse)
    Q_DISABLE_COPY(DescribeEnvironmentsResponse)

};

} // namespace Cloud9
} // namespace QtAws

#endif
