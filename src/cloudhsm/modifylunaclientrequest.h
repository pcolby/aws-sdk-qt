// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLUNACLIENTREQUEST_H
#define QTAWS_MODIFYLUNACLIENTREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class ModifyLunaClientRequestPrivate;

class QTAWSCLOUDHSM_EXPORT ModifyLunaClientRequest : public CloudHsmRequest {

public:
    ModifyLunaClientRequest(const ModifyLunaClientRequest &other);
    ModifyLunaClientRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyLunaClientRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
