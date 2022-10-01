// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESEGMENTREQUEST_H
#define QTAWS_CREATESEGMENTREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class CreateSegmentRequestPrivate;

class QTAWSEVIDENTLY_EXPORT CreateSegmentRequest : public EvidentlyRequest {

public:
    CreateSegmentRequest(const CreateSegmentRequest &other);
    CreateSegmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSegmentRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
