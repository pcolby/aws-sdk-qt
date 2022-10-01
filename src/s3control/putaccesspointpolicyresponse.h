// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCESSPOINTPOLICYRESPONSE_H
#define QTAWS_PUTACCESSPOINTPOLICYRESPONSE_H

#include "s3controlresponse.h"
#include "putaccesspointpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class PutAccessPointPolicyResponsePrivate;

class QTAWSS3CONTROL_EXPORT PutAccessPointPolicyResponse : public S3ControlResponse {
    Q_OBJECT

public:
    PutAccessPointPolicyResponse(const PutAccessPointPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAccessPointPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccessPointPolicyResponse)
    Q_DISABLE_COPY(PutAccessPointPolicyResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
