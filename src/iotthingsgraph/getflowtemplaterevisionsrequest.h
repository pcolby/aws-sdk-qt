// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFLOWTEMPLATEREVISIONSREQUEST_H
#define QTAWS_GETFLOWTEMPLATEREVISIONSREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetFlowTemplateRevisionsRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetFlowTemplateRevisionsRequest : public IoTThingsGraphRequest {

public:
    GetFlowTemplateRevisionsRequest(const GetFlowTemplateRevisionsRequest &other);
    GetFlowTemplateRevisionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFlowTemplateRevisionsRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
