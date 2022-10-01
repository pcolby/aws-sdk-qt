// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIPLEXPROGRAMREQUEST_H
#define QTAWS_CREATEMULTIPLEXPROGRAMREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class CreateMultiplexProgramRequestPrivate;

class QTAWSMEDIALIVE_EXPORT CreateMultiplexProgramRequest : public MediaLiveRequest {

public:
    CreateMultiplexProgramRequest(const CreateMultiplexProgramRequest &other);
    CreateMultiplexProgramRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMultiplexProgramRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
