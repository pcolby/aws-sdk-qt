// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCROSSACCOUNTACCESSROLERESPONSE_H
#define QTAWS_REGISTERCROSSACCOUNTACCESSROLERESPONSE_H

#include "inspectorresponse.h"
#include "registercrossaccountaccessrolerequest.h"

namespace QtAws {
namespace Inspector {

class RegisterCrossAccountAccessRoleResponsePrivate;

class QTAWSINSPECTOR_EXPORT RegisterCrossAccountAccessRoleResponse : public InspectorResponse {
    Q_OBJECT

public:
    RegisterCrossAccountAccessRoleResponse(const RegisterCrossAccountAccessRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterCrossAccountAccessRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterCrossAccountAccessRoleResponse)
    Q_DISABLE_COPY(RegisterCrossAccountAccessRoleResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
