// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESEGMENTREQUEST_H
#define QTAWS_DELETESEGMENTREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteSegmentRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteSegmentRequest : public PinpointRequest {

public:
    DeleteSegmentRequest(const DeleteSegmentRequest &other);
    DeleteSegmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSegmentRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
