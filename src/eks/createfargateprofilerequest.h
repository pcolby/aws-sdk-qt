// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFARGATEPROFILEREQUEST_H
#define QTAWS_CREATEFARGATEPROFILEREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class CreateFargateProfileRequestPrivate;

class QTAWSEKS_EXPORT CreateFargateProfileRequest : public EksRequest {

public:
    CreateFargateProfileRequest(const CreateFargateProfileRequest &other);
    CreateFargateProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFargateProfileRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
