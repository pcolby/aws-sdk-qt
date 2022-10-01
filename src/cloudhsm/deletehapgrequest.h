// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHAPGREQUEST_H
#define QTAWS_DELETEHAPGREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class DeleteHapgRequestPrivate;

class QTAWSCLOUDHSM_EXPORT DeleteHapgRequest : public CloudHsmRequest {

public:
    DeleteHapgRequest(const DeleteHapgRequest &other);
    DeleteHapgRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHapgRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
