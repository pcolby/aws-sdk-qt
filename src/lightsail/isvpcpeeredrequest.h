// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ISVPCPEEREDREQUEST_H
#define QTAWS_ISVPCPEEREDREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class IsVpcPeeredRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT IsVpcPeeredRequest : public LightsailRequest {

public:
    IsVpcPeeredRequest(const IsVpcPeeredRequest &other);
    IsVpcPeeredRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IsVpcPeeredRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
