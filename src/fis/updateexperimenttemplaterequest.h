// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPERIMENTTEMPLATEREQUEST_H
#define QTAWS_UPDATEEXPERIMENTTEMPLATEREQUEST_H

#include "fisrequest.h"

namespace QtAws {
namespace Fis {

class UpdateExperimentTemplateRequestPrivate;

class QTAWSFIS_EXPORT UpdateExperimentTemplateRequest : public FisRequest {

public:
    UpdateExperimentTemplateRequest(const UpdateExperimentTemplateRequest &other);
    UpdateExperimentTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateExperimentTemplateRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
