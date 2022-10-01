// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPACCESSLOGGINGREQUEST_H
#define QTAWS_STOPACCESSLOGGINGREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class StopAccessLoggingRequestPrivate;

class QTAWSMEDIASTORE_EXPORT StopAccessLoggingRequest : public MediaStoreRequest {

public:
    StopAccessLoggingRequest(const StopAccessLoggingRequest &other);
    StopAccessLoggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopAccessLoggingRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
