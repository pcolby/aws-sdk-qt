// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWTEMPLATEREQUEST_H
#define QTAWS_UPDATEFLOWTEMPLATEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class UpdateFlowTemplateRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT UpdateFlowTemplateRequest : public IoTThingsGraphRequest {

public:
    UpdateFlowTemplateRequest(const UpdateFlowTemplateRequest &other);
    UpdateFlowTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFlowTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
