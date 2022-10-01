// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORTERMINATIONCREDENTIALSREQUEST_H
#define QTAWS_PUTVOICECONNECTORTERMINATIONCREDENTIALSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorTerminationCredentialsRequestPrivate;

class QTAWSCHIME_EXPORT PutVoiceConnectorTerminationCredentialsRequest : public ChimeRequest {

public:
    PutVoiceConnectorTerminationCredentialsRequest(const PutVoiceConnectorTerminationCredentialsRequest &other);
    PutVoiceConnectorTerminationCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVoiceConnectorTerminationCredentialsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
