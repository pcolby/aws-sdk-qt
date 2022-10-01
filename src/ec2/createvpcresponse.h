// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCRESPONSE_H
#define QTAWS_CREATEVPCRESPONSE_H

#include "ec2response.h"
#include "createvpcrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcResponsePrivate;

class QTAWSEC2_EXPORT CreateVpcResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateVpcResponse(const CreateVpcRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVpcRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcResponse)
    Q_DISABLE_COPY(CreateVpcResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
