// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEKEYGROUPRESPONSE_H
#define QTAWS_UPDATEKEYGROUPRESPONSE_H

#include "cloudfrontresponse.h"
#include "updatekeygrouprequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateKeyGroupResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateKeyGroupResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    UpdateKeyGroupResponse(const UpdateKeyGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateKeyGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateKeyGroupResponse)
    Q_DISABLE_COPY(UpdateKeyGroupResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
