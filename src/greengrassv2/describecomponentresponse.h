// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPONENTRESPONSE_H
#define QTAWS_DESCRIBECOMPONENTRESPONSE_H

#include "greengrassv2response.h"
#include "describecomponentrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class DescribeComponentResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT DescribeComponentResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    DescribeComponentResponse(const DescribeComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeComponentResponse)
    Q_DISABLE_COPY(DescribeComponentResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
