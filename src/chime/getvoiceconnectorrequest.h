// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORREQUEST_H
#define QTAWS_GETVOICECONNECTORREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorRequestPrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorRequest : public ChimeRequest {

public:
    GetVoiceConnectorRequest(const GetVoiceConnectorRequest &other);
    GetVoiceConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
