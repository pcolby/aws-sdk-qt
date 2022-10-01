// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROTECTIONRESPONSE_H
#define QTAWS_CREATEPROTECTIONRESPONSE_H

#include "shieldresponse.h"
#include "createprotectionrequest.h"

namespace QtAws {
namespace Shield {

class CreateProtectionResponsePrivate;

class QTAWSSHIELD_EXPORT CreateProtectionResponse : public ShieldResponse {
    Q_OBJECT

public:
    CreateProtectionResponse(const CreateProtectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProtectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProtectionResponse)
    Q_DISABLE_COPY(CreateProtectionResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
