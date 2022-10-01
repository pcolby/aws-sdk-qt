// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLEDREQUESTSRESPONSE_H
#define QTAWS_GETSAMPLEDREQUESTSRESPONSE_H

#include "wafregionalresponse.h"
#include "getsampledrequestsrequest.h"

namespace QtAws {
namespace WafRegional {

class GetSampledRequestsResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT GetSampledRequestsResponse : public WafRegionalResponse {
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

} // namespace WafRegional
} // namespace QtAws

#endif
