// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECERTIFICATEREQUEST_P_H
#define QTAWS_ASSOCIATECERTIFICATEREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "associatecertificaterequest.h"

namespace QtAws {
namespace MediaConvert {

class AssociateCertificateRequest;

class AssociateCertificateRequestPrivate : public MediaConvertRequestPrivate {

public:
    AssociateCertificateRequestPrivate(const MediaConvertRequest::Action action,
                                   AssociateCertificateRequest * const q);
    AssociateCertificateRequestPrivate(const AssociateCertificateRequestPrivate &other,
                                   AssociateCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateCertificateRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
