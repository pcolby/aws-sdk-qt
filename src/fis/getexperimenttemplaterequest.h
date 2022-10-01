// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPERIMENTTEMPLATEREQUEST_H
#define QTAWS_GETEXPERIMENTTEMPLATEREQUEST_H

#include "fisrequest.h"

namespace QtAws {
namespace Fis {

class GetExperimentTemplateRequestPrivate;

class QTAWSFIS_EXPORT GetExperimentTemplateRequest : public FisRequest {

public:
    GetExperimentTemplateRequest(const GetExperimentTemplateRequest &other);
    GetExperimentTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExperimentTemplateRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
