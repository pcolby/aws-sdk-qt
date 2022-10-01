// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEE911ADDRESSRESPONSE_H
#define QTAWS_VALIDATEE911ADDRESSRESPONSE_H

#include "chimeresponse.h"
#include "validatee911addressrequest.h"

namespace QtAws {
namespace Chime {

class ValidateE911AddressResponsePrivate;

class QTAWSCHIME_EXPORT ValidateE911AddressResponse : public ChimeResponse {
    Q_OBJECT

public:
    ValidateE911AddressResponse(const ValidateE911AddressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ValidateE911AddressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateE911AddressResponse)
    Q_DISABLE_COPY(ValidateE911AddressResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
