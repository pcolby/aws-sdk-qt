// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPAMSCOPERESPONSE_H
#define QTAWS_DELETEIPAMSCOPERESPONSE_H

#include "ec2response.h"
#include "deleteipamscoperequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteIpamScopeResponsePrivate;

class QTAWSEC2_EXPORT DeleteIpamScopeResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteIpamScopeResponse(const DeleteIpamScopeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIpamScopeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIpamScopeResponse)
    Q_DISABLE_COPY(DeleteIpamScopeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
