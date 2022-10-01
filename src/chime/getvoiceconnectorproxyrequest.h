// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORPROXYREQUEST_H
#define QTAWS_GETVOICECONNECTORPROXYREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorProxyRequestPrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorProxyRequest : public ChimeRequest {

public:
    GetVoiceConnectorProxyRequest(const GetVoiceConnectorProxyRequest &other);
    GetVoiceConnectorProxyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorProxyRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
