// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFARGATEPROFILEREQUEST_H
#define QTAWS_DESCRIBEFARGATEPROFILEREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class DescribeFargateProfileRequestPrivate;

class QTAWSEKS_EXPORT DescribeFargateProfileRequest : public EksRequest {

public:
    DescribeFargateProfileRequest(const DescribeFargateProfileRequest &other);
    DescribeFargateProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFargateProfileRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
