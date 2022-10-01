// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIOREQUEST_H
#define QTAWS_CREATESTUDIOREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class CreateStudioRequestPrivate;

class QTAWSEMR_EXPORT CreateStudioRequest : public EmrRequest {

public:
    CreateStudioRequest(const CreateStudioRequest &other);
    CreateStudioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStudioRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
