// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEXPERIMENTREQUEST_H
#define QTAWS_STOPEXPERIMENTREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class StopExperimentRequestPrivate;

class QTAWSEVIDENTLY_EXPORT StopExperimentRequest : public EvidentlyRequest {

public:
    StopExperimentRequest(const StopExperimentRequest &other);
    StopExperimentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopExperimentRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
