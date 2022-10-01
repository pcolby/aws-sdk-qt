// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCRESPONSE_H
#define QTAWS_DELETEVPCRESPONSE_H

#include "ec2response.h"
#include "deletevpcrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcResponsePrivate;

class QTAWSEC2_EXPORT DeleteVpcResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteVpcResponse(const DeleteVpcRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVpcRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcResponse)
    Q_DISABLE_COPY(DeleteVpcResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
