// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXCLUSIONSRESPONSE_H
#define QTAWS_DESCRIBEEXCLUSIONSRESPONSE_H

#include "inspectorresponse.h"
#include "describeexclusionsrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeExclusionsResponsePrivate;

class QTAWSINSPECTOR_EXPORT DescribeExclusionsResponse : public InspectorResponse {
    Q_OBJECT

public:
    DescribeExclusionsResponse(const DescribeExclusionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeExclusionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExclusionsResponse)
    Q_DISABLE_COPY(DescribeExclusionsResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
