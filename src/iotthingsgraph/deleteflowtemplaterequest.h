// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWTEMPLATEREQUEST_H
#define QTAWS_DELETEFLOWTEMPLATEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeleteFlowTemplateRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DeleteFlowTemplateRequest : public IoTThingsGraphRequest {

public:
    DeleteFlowTemplateRequest(const DeleteFlowTemplateRequest &other);
    DeleteFlowTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFlowTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
