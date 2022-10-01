// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPERIMENTREQUEST_H
#define QTAWS_STARTEXPERIMENTREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class StartExperimentRequestPrivate;

class QTAWSEVIDENTLY_EXPORT StartExperimentRequest : public EvidentlyRequest {

public:
    StartExperimentRequest(const StartExperimentRequest &other);
    StartExperimentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartExperimentRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
