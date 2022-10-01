// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTARTREQUEST_H
#define QTAWS_BATCHSTARTREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class BatchStartRequestPrivate;

class QTAWSMEDIALIVE_EXPORT BatchStartRequest : public MediaLiveRequest {

public:
    BatchStartRequest(const BatchStartRequest &other);
    BatchStartRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchStartRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
