// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINREQUEST_H
#define QTAWS_UPDATEDOMAINREQUEST_H

#include "voiceidrequest.h"

namespace QtAws {
namespace VoiceId {

class UpdateDomainRequestPrivate;

class QTAWSVOICEID_EXPORT UpdateDomainRequest : public VoiceIdRequest {

public:
    UpdateDomainRequest(const UpdateDomainRequest &other);
    UpdateDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
