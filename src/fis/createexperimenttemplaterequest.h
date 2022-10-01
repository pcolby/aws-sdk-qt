// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPERIMENTTEMPLATEREQUEST_H
#define QTAWS_CREATEEXPERIMENTTEMPLATEREQUEST_H

#include "fisrequest.h"

namespace QtAws {
namespace Fis {

class CreateExperimentTemplateRequestPrivate;

class QTAWSFIS_EXPORT CreateExperimentTemplateRequest : public FisRequest {

public:
    CreateExperimentTemplateRequest(const CreateExperimentTemplateRequest &other);
    CreateExperimentTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExperimentTemplateRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
