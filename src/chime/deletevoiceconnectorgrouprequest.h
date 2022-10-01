// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORGROUPREQUEST_H
#define QTAWS_DELETEVOICECONNECTORGROUPREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorGroupRequestPrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorGroupRequest : public ChimeRequest {

public:
    DeleteVoiceConnectorGroupRequest(const DeleteVoiceConnectorGroupRequest &other);
    DeleteVoiceConnectorGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorGroupRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
