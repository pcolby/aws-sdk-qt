// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTUDIOREQUEST_H
#define QTAWS_UPDATESTUDIOREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class UpdateStudioRequestPrivate;

class QTAWSEMR_EXPORT UpdateStudioRequest : public EmrRequest {

public:
    UpdateStudioRequest(const UpdateStudioRequest &other);
    UpdateStudioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStudioRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
