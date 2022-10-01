// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMULTIPLEXPROGRAMREQUEST_H
#define QTAWS_DELETEMULTIPLEXPROGRAMREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteMultiplexProgramRequestPrivate;

class QTAWSMEDIALIVE_EXPORT DeleteMultiplexProgramRequest : public MediaLiveRequest {

public:
    DeleteMultiplexProgramRequest(const DeleteMultiplexProgramRequest &other);
    DeleteMultiplexProgramRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMultiplexProgramRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
