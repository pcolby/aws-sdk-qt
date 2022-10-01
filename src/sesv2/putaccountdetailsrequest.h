// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTDETAILSREQUEST_H
#define QTAWS_PUTACCOUNTDETAILSREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class PutAccountDetailsRequestPrivate;

class QTAWSSESV2_EXPORT PutAccountDetailsRequest : public SESv2Request {

public:
    PutAccountDetailsRequest(const PutAccountDetailsRequest &other);
    PutAccountDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountDetailsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
