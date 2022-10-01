// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLEDREQUESTSRESPONSE_H
#define QTAWS_GETSAMPLEDREQUESTSRESPONSE_H

#include "wafv2response.h"
#include "getsampledrequestsrequest.h"

namespace QtAws {
namespace Wafv2 {

class GetSampledRequestsResponsePrivate;

class QTAWSWAFV2_EXPORT GetSampledRequestsResponse : public Wafv2Response {
    Q_OBJECT

public:
    GetSampledRequestsResponse(const GetSampledRequestsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSampledRequestsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSampledRequestsResponse)
    Q_DISABLE_COPY(GetSampledRequestsResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
