// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICECONNECTORREQUEST_H
#define QTAWS_UPDATEVOICECONNECTORREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UpdateVoiceConnectorRequestPrivate;

class QTAWSCHIME_EXPORT UpdateVoiceConnectorRequest : public ChimeRequest {

public:
    UpdateVoiceConnectorRequest(const UpdateVoiceConnectorRequest &other);
    UpdateVoiceConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVoiceConnectorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
