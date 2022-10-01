// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORORIGINATIONREQUEST_H
#define QTAWS_GETVOICECONNECTORORIGINATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorOriginationRequestPrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorOriginationRequest : public ChimeRequest {

public:
    GetVoiceConnectorOriginationRequest(const GetVoiceConnectorOriginationRequest &other);
    GetVoiceConnectorOriginationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorOriginationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
