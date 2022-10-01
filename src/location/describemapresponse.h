// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAPRESPONSE_H
#define QTAWS_DESCRIBEMAPRESPONSE_H

#include "locationresponse.h"
#include "describemaprequest.h"

namespace QtAws {
namespace Location {

class DescribeMapResponsePrivate;

class QTAWSLOCATION_EXPORT DescribeMapResponse : public LocationResponse {
    Q_OBJECT

public:
    DescribeMapResponse(const DescribeMapRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMapRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMapResponse)
    Q_DISABLE_COPY(DescribeMapResponse)

};

} // namespace Location
} // namespace QtAws

#endif
