// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTNERINPUTREQUEST_H
#define QTAWS_CREATEPARTNERINPUTREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class CreatePartnerInputRequestPrivate;

class QTAWSMEDIALIVE_EXPORT CreatePartnerInputRequest : public MediaLiveRequest {

public:
    CreatePartnerInputRequest(const CreatePartnerInputRequest &other);
    CreatePartnerInputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePartnerInputRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
