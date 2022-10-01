// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECERTIFICATERESPONSE_H
#define QTAWS_DISASSOCIATECERTIFICATERESPONSE_H

#include "mediaconvertresponse.h"
#include "disassociatecertificaterequest.h"

namespace QtAws {
namespace MediaConvert {

class DisassociateCertificateResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT DisassociateCertificateResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    DisassociateCertificateResponse(const DisassociateCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateCertificateResponse)
    Q_DISABLE_COPY(DisassociateCertificateResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
