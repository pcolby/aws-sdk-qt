// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENAMESPACERESPONSE_H
#define QTAWS_DESCRIBENAMESPACERESPONSE_H

#include "quicksightresponse.h"
#include "describenamespacerequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeNamespaceResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeNamespaceResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeNamespaceResponse(const DescribeNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNamespaceResponse)
    Q_DISABLE_COPY(DescribeNamespaceResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
