// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMULTIPLEXREQUEST_H
#define QTAWS_DELETEMULTIPLEXREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteMultiplexRequestPrivate;

class QTAWSMEDIALIVE_EXPORT DeleteMultiplexRequest : public MediaLiveRequest {

public:
    DeleteMultiplexRequest(const DeleteMultiplexRequest &other);
    DeleteMultiplexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMultiplexRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
