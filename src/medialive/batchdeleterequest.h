// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEREQUEST_H
#define QTAWS_BATCHDELETEREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class BatchDeleteRequestPrivate;

class QTAWSMEDIALIVE_EXPORT BatchDeleteRequest : public MediaLiveRequest {

public:
    BatchDeleteRequest(const BatchDeleteRequest &other);
    BatchDeleteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
