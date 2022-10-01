// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORTERMINATIONREQUEST_H
#define QTAWS_DELETEVOICECONNECTORTERMINATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorTerminationRequestPrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorTerminationRequest : public ChimeRequest {

public:
    DeleteVoiceConnectorTerminationRequest(const DeleteVoiceConnectorTerminationRequest &other);
    DeleteVoiceConnectorTerminationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorTerminationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
