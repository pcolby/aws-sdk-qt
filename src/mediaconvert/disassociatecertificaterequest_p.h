// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECERTIFICATEREQUEST_P_H
#define QTAWS_DISASSOCIATECERTIFICATEREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "disassociatecertificaterequest.h"

namespace QtAws {
namespace MediaConvert {

class DisassociateCertificateRequest;

class DisassociateCertificateRequestPrivate : public MediaConvertRequestPrivate {

public:
    DisassociateCertificateRequestPrivate(const MediaConvertRequest::Action action,
                                   DisassociateCertificateRequest * const q);
    DisassociateCertificateRequestPrivate(const DisassociateCertificateRequestPrivate &other,
                                   DisassociateCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateCertificateRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
