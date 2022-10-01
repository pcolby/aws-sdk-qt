// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSUPPRESSIONATTRIBUTESREQUEST_H
#define QTAWS_PUTACCOUNTSUPPRESSIONATTRIBUTESREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class PutAccountSuppressionAttributesRequestPrivate;

class QTAWSSESV2_EXPORT PutAccountSuppressionAttributesRequest : public SESv2Request {

public:
    PutAccountSuppressionAttributesRequest(const PutAccountSuppressionAttributesRequest &other);
    PutAccountSuppressionAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountSuppressionAttributesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
