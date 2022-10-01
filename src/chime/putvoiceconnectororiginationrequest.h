// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORORIGINATIONREQUEST_H
#define QTAWS_PUTVOICECONNECTORORIGINATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorOriginationRequestPrivate;

class QTAWSCHIME_EXPORT PutVoiceConnectorOriginationRequest : public ChimeRequest {

public:
    PutVoiceConnectorOriginationRequest(const PutVoiceConnectorOriginationRequest &other);
    PutVoiceConnectorOriginationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVoiceConnectorOriginationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
