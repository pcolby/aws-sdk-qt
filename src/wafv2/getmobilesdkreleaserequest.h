// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMOBILESDKRELEASEREQUEST_H
#define QTAWS_GETMOBILESDKRELEASEREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class GetMobileSdkReleaseRequestPrivate;

class QTAWSWAFV2_EXPORT GetMobileSdkReleaseRequest : public Wafv2Request {

public:
    GetMobileSdkReleaseRequest(const GetMobileSdkReleaseRequest &other);
    GetMobileSdkReleaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMobileSdkReleaseRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
