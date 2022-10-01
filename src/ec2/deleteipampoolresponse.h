// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPAMPOOLRESPONSE_H
#define QTAWS_DELETEIPAMPOOLRESPONSE_H

#include "ec2response.h"
#include "deleteipampoolrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteIpamPoolResponsePrivate;

class QTAWSEC2_EXPORT DeleteIpamPoolResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteIpamPoolResponse(const DeleteIpamPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIpamPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIpamPoolResponse)
    Q_DISABLE_COPY(DeleteIpamPoolResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
