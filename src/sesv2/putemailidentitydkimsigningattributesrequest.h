// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYDKIMSIGNINGATTRIBUTESREQUEST_H
#define QTAWS_PUTEMAILIDENTITYDKIMSIGNINGATTRIBUTESREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityDkimSigningAttributesRequestPrivate;

class QTAWSSESV2_EXPORT PutEmailIdentityDkimSigningAttributesRequest : public SESv2Request {

public:
    PutEmailIdentityDkimSigningAttributesRequest(const PutEmailIdentityDkimSigningAttributesRequest &other);
    PutEmailIdentityDkimSigningAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEmailIdentityDkimSigningAttributesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
