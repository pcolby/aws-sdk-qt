// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMPORTJOBREQUEST_H
#define QTAWS_CREATEIMPORTJOBREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateImportJobRequestPrivate;

class QTAWSPINPOINT_EXPORT CreateImportJobRequest : public PinpointRequest {

public:
    CreateImportJobRequest(const CreateImportJobRequest &other);
    CreateImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImportJobRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
