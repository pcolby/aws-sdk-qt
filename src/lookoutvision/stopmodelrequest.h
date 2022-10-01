// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMODELREQUEST_H
#define QTAWS_STOPMODELREQUEST_H

#include "lookoutvisionrequest.h"

namespace QtAws {
namespace LookoutVision {

class StopModelRequestPrivate;

class QTAWSLOOKOUTVISION_EXPORT StopModelRequest : public LookoutVisionRequest {

public:
    StopModelRequest(const StopModelRequest &other);
    StopModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopModelRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
