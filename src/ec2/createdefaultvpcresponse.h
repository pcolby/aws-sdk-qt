// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEFAULTVPCRESPONSE_H
#define QTAWS_CREATEDEFAULTVPCRESPONSE_H

#include "ec2response.h"
#include "createdefaultvpcrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateDefaultVpcResponsePrivate;

class QTAWSEC2_EXPORT CreateDefaultVpcResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateDefaultVpcResponse(const CreateDefaultVpcRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDefaultVpcRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDefaultVpcResponse)
    Q_DISABLE_COPY(CreateDefaultVpcResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
