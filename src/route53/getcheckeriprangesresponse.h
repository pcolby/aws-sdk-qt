// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHECKERIPRANGESRESPONSE_H
#define QTAWS_GETCHECKERIPRANGESRESPONSE_H

#include "route53response.h"
#include "getcheckeriprangesrequest.h"

namespace QtAws {
namespace Route53 {

class GetCheckerIpRangesResponsePrivate;

class QTAWSROUTE53_EXPORT GetCheckerIpRangesResponse : public Route53Response {
    Q_OBJECT

public:
    GetCheckerIpRangesResponse(const GetCheckerIpRangesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCheckerIpRangesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCheckerIpRangesResponse)
    Q_DISABLE_COPY(GetCheckerIpRangesResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
