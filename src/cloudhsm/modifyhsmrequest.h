// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYHSMREQUEST_H
#define QTAWS_MODIFYHSMREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class ModifyHsmRequestPrivate;

class QTAWSCLOUDHSM_EXPORT ModifyHsmRequest : public CloudHsmRequest {

public:
    ModifyHsmRequest(const ModifyHsmRequest &other);
    ModifyHsmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyHsmRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
