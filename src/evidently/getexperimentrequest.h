// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPERIMENTREQUEST_H
#define QTAWS_GETEXPERIMENTREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class GetExperimentRequestPrivate;

class QTAWSEVIDENTLY_EXPORT GetExperimentRequest : public EvidentlyRequest {

public:
    GetExperimentRequest(const GetExperimentRequest &other);
    GetExperimentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExperimentRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
