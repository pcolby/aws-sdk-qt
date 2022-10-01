// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWTEMPLATEREQUEST_H
#define QTAWS_CREATEFLOWTEMPLATEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class CreateFlowTemplateRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT CreateFlowTemplateRequest : public IoTThingsGraphRequest {

public:
    CreateFlowTemplateRequest(const CreateFlowTemplateRequest &other);
    CreateFlowTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFlowTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
