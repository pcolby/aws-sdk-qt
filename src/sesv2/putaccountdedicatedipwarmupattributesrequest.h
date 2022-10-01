// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTDEDICATEDIPWARMUPATTRIBUTESREQUEST_H
#define QTAWS_PUTACCOUNTDEDICATEDIPWARMUPATTRIBUTESREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class PutAccountDedicatedIpWarmupAttributesRequestPrivate;

class QTAWSSESV2_EXPORT PutAccountDedicatedIpWarmupAttributesRequest : public SESv2Request {

public:
    PutAccountDedicatedIpWarmupAttributesRequest(const PutAccountDedicatedIpWarmupAttributesRequest &other);
    PutAccountDedicatedIpWarmupAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountDedicatedIpWarmupAttributesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
