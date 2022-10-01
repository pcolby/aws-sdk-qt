// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORTERMINATIONHEALTHREQUEST_H
#define QTAWS_GETVOICECONNECTORTERMINATIONHEALTHREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorTerminationHealthRequestPrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorTerminationHealthRequest : public ChimeRequest {

public:
    GetVoiceConnectorTerminationHealthRequest(const GetVoiceConnectorTerminationHealthRequest &other);
    GetVoiceConnectorTerminationHealthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorTerminationHealthRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
