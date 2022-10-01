// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTOPREQUEST_H
#define QTAWS_BATCHSTOPREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class BatchStopRequestPrivate;

class QTAWSMEDIALIVE_EXPORT BatchStopRequest : public MediaLiveRequest {

public:
    BatchStopRequest(const BatchStopRequest &other);
    BatchStopRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchStopRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
