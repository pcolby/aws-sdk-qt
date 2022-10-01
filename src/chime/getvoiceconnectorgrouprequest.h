// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORGROUPREQUEST_H
#define QTAWS_GETVOICECONNECTORGROUPREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorGroupRequestPrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorGroupRequest : public ChimeRequest {

public:
    GetVoiceConnectorGroupRequest(const GetVoiceConnectorGroupRequest &other);
    GetVoiceConnectorGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorGroupRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
