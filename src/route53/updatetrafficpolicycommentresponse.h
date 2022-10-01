// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAFFICPOLICYCOMMENTRESPONSE_H
#define QTAWS_UPDATETRAFFICPOLICYCOMMENTRESPONSE_H

#include "route53response.h"
#include "updatetrafficpolicycommentrequest.h"

namespace QtAws {
namespace Route53 {

class UpdateTrafficPolicyCommentResponsePrivate;

class QTAWSROUTE53_EXPORT UpdateTrafficPolicyCommentResponse : public Route53Response {
    Q_OBJECT

public:
    UpdateTrafficPolicyCommentResponse(const UpdateTrafficPolicyCommentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTrafficPolicyCommentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrafficPolicyCommentResponse)
    Q_DISABLE_COPY(UpdateTrafficPolicyCommentResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
