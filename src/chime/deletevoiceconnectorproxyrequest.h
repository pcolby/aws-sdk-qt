// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORPROXYREQUEST_H
#define QTAWS_DELETEVOICECONNECTORPROXYREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorProxyRequestPrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorProxyRequest : public ChimeRequest {

public:
    DeleteVoiceConnectorProxyRequest(const DeleteVoiceConnectorProxyRequest &other);
    DeleteVoiceConnectorProxyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorProxyRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
