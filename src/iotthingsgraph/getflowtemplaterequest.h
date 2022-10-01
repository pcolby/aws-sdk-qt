// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFLOWTEMPLATEREQUEST_H
#define QTAWS_GETFLOWTEMPLATEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetFlowTemplateRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetFlowTemplateRequest : public IoTThingsGraphRequest {

public:
    GetFlowTemplateRequest(const GetFlowTemplateRequest &other);
    GetFlowTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFlowTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
