// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORPROXYREQUEST_H
#define QTAWS_PUTVOICECONNECTORPROXYREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorProxyRequestPrivate;

class QTAWSCHIME_EXPORT PutVoiceConnectorProxyRequest : public ChimeRequest {

public:
    PutVoiceConnectorProxyRequest(const PutVoiceConnectorProxyRequest &other);
    PutVoiceConnectorProxyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVoiceConnectorProxyRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
