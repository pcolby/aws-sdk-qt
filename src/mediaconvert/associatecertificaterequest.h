// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECERTIFICATEREQUEST_H
#define QTAWS_ASSOCIATECERTIFICATEREQUEST_H

#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class AssociateCertificateRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT AssociateCertificateRequest : public MediaConvertRequest {

public:
    AssociateCertificateRequest(const AssociateCertificateRequest &other);
    AssociateCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateCertificateRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
