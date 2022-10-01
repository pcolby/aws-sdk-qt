// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCANARYRUNSRESPONSE_H
#define QTAWS_GETCANARYRUNSRESPONSE_H

#include "syntheticsresponse.h"
#include "getcanaryrunsrequest.h"

namespace QtAws {
namespace Synthetics {

class GetCanaryRunsResponsePrivate;

class QTAWSSYNTHETICS_EXPORT GetCanaryRunsResponse : public SyntheticsResponse {
    Q_OBJECT

public:
    GetCanaryRunsResponse(const GetCanaryRunsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCanaryRunsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCanaryRunsResponse)
    Q_DISABLE_COPY(GetCanaryRunsResponse)

};

} // namespace Synthetics
} // namespace QtAws

#endif
