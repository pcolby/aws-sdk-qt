// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMODELREQUEST_H
#define QTAWS_STARTMODELREQUEST_H

#include "lookoutvisionrequest.h"

namespace QtAws {
namespace LookoutVision {

class StartModelRequestPrivate;

class QTAWSLOOKOUTVISION_EXPORT StartModelRequest : public LookoutVisionRequest {

public:
    StartModelRequest(const StartModelRequest &other);
    StartModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartModelRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
