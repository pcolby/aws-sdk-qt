// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHCLASSICLINKVPCRESPONSE_H
#define QTAWS_ATTACHCLASSICLINKVPCRESPONSE_H

#include "ec2response.h"
#include "attachclassiclinkvpcrequest.h"

namespace QtAws {
namespace Ec2 {

class AttachClassicLinkVpcResponsePrivate;

class QTAWSEC2_EXPORT AttachClassicLinkVpcResponse : public Ec2Response {
    Q_OBJECT

public:
    AttachClassicLinkVpcResponse(const AttachClassicLinkVpcRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachClassicLinkVpcRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachClassicLinkVpcResponse)
    Q_DISABLE_COPY(AttachClassicLinkVpcResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
