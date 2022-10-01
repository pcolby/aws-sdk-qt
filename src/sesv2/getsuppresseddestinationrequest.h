// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUPPRESSEDDESTINATIONREQUEST_H
#define QTAWS_GETSUPPRESSEDDESTINATIONREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class GetSuppressedDestinationRequestPrivate;

class QTAWSSESV2_EXPORT GetSuppressedDestinationRequest : public SESv2Request {

public:
    GetSuppressedDestinationRequest(const GetSuppressedDestinationRequest &other);
    GetSuppressedDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSuppressedDestinationRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
