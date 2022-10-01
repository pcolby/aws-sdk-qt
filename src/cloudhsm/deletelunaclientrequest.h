// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELUNACLIENTREQUEST_H
#define QTAWS_DELETELUNACLIENTREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class DeleteLunaClientRequestPrivate;

class QTAWSCLOUDHSM_EXPORT DeleteLunaClientRequest : public CloudHsmRequest {

public:
    DeleteLunaClientRequest(const DeleteLunaClientRequest &other);
    DeleteLunaClientRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLunaClientRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
