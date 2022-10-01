// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYHAPGREQUEST_H
#define QTAWS_MODIFYHAPGREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class ModifyHapgRequestPrivate;

class QTAWSCLOUDHSM_EXPORT ModifyHapgRequest : public CloudHsmRequest {

public:
    ModifyHapgRequest(const ModifyHapgRequest &other);
    ModifyHapgRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyHapgRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
