// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEFLOWTEMPLATEREQUEST_H
#define QTAWS_DEPRECATEFLOWTEMPLATEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeprecateFlowTemplateRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DeprecateFlowTemplateRequest : public IoTThingsGraphRequest {

public:
    DeprecateFlowTemplateRequest(const DeprecateFlowTemplateRequest &other);
    DeprecateFlowTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprecateFlowTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
