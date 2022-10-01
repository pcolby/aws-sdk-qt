// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORTERMINATIONCREDENTIALSREQUEST_H
#define QTAWS_DELETEVOICECONNECTORTERMINATIONCREDENTIALSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorTerminationCredentialsRequestPrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorTerminationCredentialsRequest : public ChimeRequest {

public:
    DeleteVoiceConnectorTerminationCredentialsRequest(const DeleteVoiceConnectorTerminationCredentialsRequest &other);
    DeleteVoiceConnectorTerminationCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorTerminationCredentialsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
