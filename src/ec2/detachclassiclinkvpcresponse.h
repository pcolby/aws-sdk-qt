// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHCLASSICLINKVPCRESPONSE_H
#define QTAWS_DETACHCLASSICLINKVPCRESPONSE_H

#include "ec2response.h"
#include "detachclassiclinkvpcrequest.h"

namespace QtAws {
namespace Ec2 {

class DetachClassicLinkVpcResponsePrivate;

class QTAWSEC2_EXPORT DetachClassicLinkVpcResponse : public Ec2Response {
    Q_OBJECT

public:
    DetachClassicLinkVpcResponse(const DetachClassicLinkVpcRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachClassicLinkVpcRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachClassicLinkVpcResponse)
    Q_DISABLE_COPY(DetachClassicLinkVpcResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
