// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPERIMENTREQUEST_H
#define QTAWS_GETEXPERIMENTREQUEST_H

#include "fisrequest.h"

namespace QtAws {
namespace Fis {

class GetExperimentRequestPrivate;

class QTAWSFIS_EXPORT GetExperimentRequest : public FisRequest {

public:
    GetExperimentRequest(const GetExperimentRequest &other);
    GetExperimentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExperimentRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
