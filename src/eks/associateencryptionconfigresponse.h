// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENCRYPTIONCONFIGRESPONSE_H
#define QTAWS_ASSOCIATEENCRYPTIONCONFIGRESPONSE_H

#include "eksresponse.h"
#include "associateencryptionconfigrequest.h"

namespace QtAws {
namespace Eks {

class AssociateEncryptionConfigResponsePrivate;

class QTAWSEKS_EXPORT AssociateEncryptionConfigResponse : public EksResponse {
    Q_OBJECT

public:
    AssociateEncryptionConfigResponse(const AssociateEncryptionConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateEncryptionConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateEncryptionConfigResponse)
    Q_DISABLE_COPY(AssociateEncryptionConfigResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
