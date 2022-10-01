// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORTERMINATIONREQUEST_H
#define QTAWS_PUTVOICECONNECTORTERMINATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorTerminationRequestPrivate;

class QTAWSCHIME_EXPORT PutVoiceConnectorTerminationRequest : public ChimeRequest {

public:
    PutVoiceConnectorTerminationRequest(const PutVoiceConnectorTerminationRequest &other);
    PutVoiceConnectorTerminationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVoiceConnectorTerminationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
