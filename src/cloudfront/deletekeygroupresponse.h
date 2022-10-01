// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYGROUPRESPONSE_H
#define QTAWS_DELETEKEYGROUPRESPONSE_H

#include "cloudfrontresponse.h"
#include "deletekeygrouprequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteKeyGroupResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteKeyGroupResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    DeleteKeyGroupResponse(const DeleteKeyGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteKeyGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteKeyGroupResponse)
    Q_DISABLE_COPY(DeleteKeyGroupResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
