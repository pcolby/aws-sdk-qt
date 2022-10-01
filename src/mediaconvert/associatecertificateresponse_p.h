// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECERTIFICATERESPONSE_P_H
#define QTAWS_ASSOCIATECERTIFICATERESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class AssociateCertificateResponse;

class AssociateCertificateResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit AssociateCertificateResponsePrivate(AssociateCertificateResponse * const q);

    void parseAssociateCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateCertificateResponse)
    Q_DISABLE_COPY(AssociateCertificateResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
