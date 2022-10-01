// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORORIGINATIONREQUEST_H
#define QTAWS_DELETEVOICECONNECTORORIGINATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorOriginationRequestPrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorOriginationRequest : public ChimeRequest {

public:
    DeleteVoiceConnectorOriginationRequest(const DeleteVoiceConnectorOriginationRequest &other);
    DeleteVoiceConnectorOriginationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorOriginationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
