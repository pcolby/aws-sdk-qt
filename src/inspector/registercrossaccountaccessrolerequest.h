// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCROSSACCOUNTACCESSROLEREQUEST_H
#define QTAWS_REGISTERCROSSACCOUNTACCESSROLEREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class RegisterCrossAccountAccessRoleRequestPrivate;

class QTAWSINSPECTOR_EXPORT RegisterCrossAccountAccessRoleRequest : public InspectorRequest {

public:
    RegisterCrossAccountAccessRoleRequest(const RegisterCrossAccountAccessRoleRequest &other);
    RegisterCrossAccountAccessRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterCrossAccountAccessRoleRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
