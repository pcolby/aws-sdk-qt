// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVITYRESPONSE_H
#define QTAWS_DESCRIBEACTIVITYRESPONSE_H

#include "sfnresponse.h"
#include "describeactivityrequest.h"

namespace QtAws {
namespace Sfn {

class DescribeActivityResponsePrivate;

class QTAWSSFN_EXPORT DescribeActivityResponse : public SfnResponse {
    Q_OBJECT

public:
    DescribeActivityResponse(const DescribeActivityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeActivityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeActivityResponse)
    Q_DISABLE_COPY(DescribeActivityResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif
