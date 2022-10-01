// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMREQUEST_H
#define QTAWS_CREATEHSMREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class CreateHsmRequestPrivate;

class QTAWSCLOUDHSM_EXPORT CreateHsmRequest : public CloudHsmRequest {

public:
    CreateHsmRequest(const CreateHsmRequest &other);
    CreateHsmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHsmRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
