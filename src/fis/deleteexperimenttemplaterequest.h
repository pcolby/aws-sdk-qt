// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIMENTTEMPLATEREQUEST_H
#define QTAWS_DELETEEXPERIMENTTEMPLATEREQUEST_H

#include "fisrequest.h"

namespace QtAws {
namespace Fis {

class DeleteExperimentTemplateRequestPrivate;

class QTAWSFIS_EXPORT DeleteExperimentTemplateRequest : public FisRequest {

public:
    DeleteExperimentTemplateRequest(const DeleteExperimentTemplateRequest &other);
    DeleteExperimentTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExperimentTemplateRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
