// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICECONNECTORGROUPREQUEST_H
#define QTAWS_UPDATEVOICECONNECTORGROUPREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UpdateVoiceConnectorGroupRequestPrivate;

class QTAWSCHIME_EXPORT UpdateVoiceConnectorGroupRequest : public ChimeRequest {

public:
    UpdateVoiceConnectorGroupRequest(const UpdateVoiceConnectorGroupRequest &other);
    UpdateVoiceConnectorGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVoiceConnectorGroupRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
