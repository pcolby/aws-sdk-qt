// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEMOBILESDKRELEASEURLREQUEST_H
#define QTAWS_GENERATEMOBILESDKRELEASEURLREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class GenerateMobileSdkReleaseUrlRequestPrivate;

class QTAWSWAFV2_EXPORT GenerateMobileSdkReleaseUrlRequest : public Wafv2Request {

public:
    GenerateMobileSdkReleaseUrlRequest(const GenerateMobileSdkReleaseUrlRequest &other);
    GenerateMobileSdkReleaseUrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateMobileSdkReleaseUrlRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
