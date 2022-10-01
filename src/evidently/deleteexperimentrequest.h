// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIMENTREQUEST_H
#define QTAWS_DELETEEXPERIMENTREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class DeleteExperimentRequestPrivate;

class QTAWSEVIDENTLY_EXPORT DeleteExperimentRequest : public EvidentlyRequest {

public:
    DeleteExperimentRequest(const DeleteExperimentRequest &other);
    DeleteExperimentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExperimentRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
