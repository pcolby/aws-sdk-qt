// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOICECONNECTORREQUEST_H
#define QTAWS_CREATEVOICECONNECTORREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateVoiceConnectorRequestPrivate;

class QTAWSCHIME_EXPORT CreateVoiceConnectorRequest : public ChimeRequest {

public:
    CreateVoiceConnectorRequest(const CreateVoiceConnectorRequest &other);
    CreateVoiceConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVoiceConnectorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
