// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLATFORMAPPLICATIONREQUEST_H
#define QTAWS_DELETEPLATFORMAPPLICATIONREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class DeletePlatformApplicationRequestPrivate;

class QTAWSSNS_EXPORT DeletePlatformApplicationRequest : public SnsRequest {

public:
    DeletePlatformApplicationRequest(const DeletePlatformApplicationRequest &other);
    DeletePlatformApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePlatformApplicationRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
