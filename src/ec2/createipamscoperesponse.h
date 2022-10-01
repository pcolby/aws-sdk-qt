// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPAMSCOPERESPONSE_H
#define QTAWS_CREATEIPAMSCOPERESPONSE_H

#include "ec2response.h"
#include "createipamscoperequest.h"

namespace QtAws {
namespace Ec2 {

class CreateIpamScopeResponsePrivate;

class QTAWSEC2_EXPORT CreateIpamScopeResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateIpamScopeResponse(const CreateIpamScopeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIpamScopeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIpamScopeResponse)
    Q_DISABLE_COPY(CreateIpamScopeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
