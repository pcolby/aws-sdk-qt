// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOICECONNECTORGROUPREQUEST_H
#define QTAWS_CREATEVOICECONNECTORGROUPREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateVoiceConnectorGroupRequestPrivate;

class QTAWSCHIME_EXPORT CreateVoiceConnectorGroupRequest : public ChimeRequest {

public:
    CreateVoiceConnectorGroupRequest(const CreateVoiceConnectorGroupRequest &other);
    CreateVoiceConnectorGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVoiceConnectorGroupRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
