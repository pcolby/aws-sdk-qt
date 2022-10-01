// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMULTIPLEXPROGRAMREQUEST_H
#define QTAWS_UPDATEMULTIPLEXPROGRAMREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateMultiplexProgramRequestPrivate;

class QTAWSMEDIALIVE_EXPORT UpdateMultiplexProgramRequest : public MediaLiveRequest {

public:
    UpdateMultiplexProgramRequest(const UpdateMultiplexProgramRequest &other);
    UpdateMultiplexProgramRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMultiplexProgramRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
