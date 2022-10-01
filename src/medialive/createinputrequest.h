// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINPUTREQUEST_H
#define QTAWS_CREATEINPUTREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class CreateInputRequestPrivate;

class QTAWSMEDIALIVE_EXPORT CreateInputRequest : public MediaLiveRequest {

public:
    CreateInputRequest(const CreateInputRequest &other);
    CreateInputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInputRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
