// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPERIMENTREQUEST_H
#define QTAWS_CREATEEXPERIMENTREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class CreateExperimentRequestPrivate;

class QTAWSEVIDENTLY_EXPORT CreateExperimentRequest : public EvidentlyRequest {

public:
    CreateExperimentRequest(const CreateExperimentRequest &other);
    CreateExperimentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExperimentRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
