// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPORTJOBREQUEST_H
#define QTAWS_CREATEEXPORTJOBREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateExportJobRequestPrivate;

class QTAWSPINPOINT_EXPORT CreateExportJobRequest : public PinpointRequest {

public:
    CreateExportJobRequest(const CreateExportJobRequest &other);
    CreateExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExportJobRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
