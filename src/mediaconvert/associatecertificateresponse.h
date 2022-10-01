// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECERTIFICATERESPONSE_H
#define QTAWS_ASSOCIATECERTIFICATERESPONSE_H

#include "mediaconvertresponse.h"
#include "associatecertificaterequest.h"

namespace QtAws {
namespace MediaConvert {

class AssociateCertificateResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT AssociateCertificateResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    AssociateCertificateResponse(const AssociateCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateCertificateResponse)
    Q_DISABLE_COPY(AssociateCertificateResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
