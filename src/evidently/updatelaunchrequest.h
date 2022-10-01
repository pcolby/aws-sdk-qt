// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHREQUEST_H
#define QTAWS_UPDATELAUNCHREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class UpdateLaunchRequestPrivate;

class QTAWSEVIDENTLY_EXPORT UpdateLaunchRequest : public EvidentlyRequest {

public:
    UpdateLaunchRequest(const UpdateLaunchRequest &other);
    UpdateLaunchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLaunchRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
