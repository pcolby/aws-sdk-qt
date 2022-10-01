// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTKEYPAIRREQUEST_H
#define QTAWS_IMPORTKEYPAIRREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class ImportKeyPairRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT ImportKeyPairRequest : public LightsailRequest {

public:
    ImportKeyPairRequest(const ImportKeyPairRequest &other);
    ImportKeyPairRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportKeyPairRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
