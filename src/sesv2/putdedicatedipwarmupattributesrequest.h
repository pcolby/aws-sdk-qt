// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEDICATEDIPWARMUPATTRIBUTESREQUEST_H
#define QTAWS_PUTDEDICATEDIPWARMUPATTRIBUTESREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class PutDedicatedIpWarmupAttributesRequestPrivate;

class QTAWSSESV2_EXPORT PutDedicatedIpWarmupAttributesRequest : public SESv2Request {

public:
    PutDedicatedIpWarmupAttributesRequest(const PutDedicatedIpWarmupAttributesRequest &other);
    PutDedicatedIpWarmupAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDedicatedIpWarmupAttributesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
