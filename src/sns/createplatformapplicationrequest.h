// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLATFORMAPPLICATIONREQUEST_H
#define QTAWS_CREATEPLATFORMAPPLICATIONREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class CreatePlatformApplicationRequestPrivate;

class QTAWSSNS_EXPORT CreatePlatformApplicationRequest : public SnsRequest {

public:
    CreatePlatformApplicationRequest(const CreatePlatformApplicationRequest &other);
    CreatePlatformApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlatformApplicationRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
