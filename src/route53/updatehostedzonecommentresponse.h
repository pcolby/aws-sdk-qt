// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOSTEDZONECOMMENTRESPONSE_H
#define QTAWS_UPDATEHOSTEDZONECOMMENTRESPONSE_H

#include "route53response.h"
#include "updatehostedzonecommentrequest.h"

namespace QtAws {
namespace Route53 {

class UpdateHostedZoneCommentResponsePrivate;

class QTAWSROUTE53_EXPORT UpdateHostedZoneCommentResponse : public Route53Response {
    Q_OBJECT

public:
    UpdateHostedZoneCommentResponse(const UpdateHostedZoneCommentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateHostedZoneCommentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHostedZoneCommentResponse)
    Q_DISABLE_COPY(UpdateHostedZoneCommentResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
