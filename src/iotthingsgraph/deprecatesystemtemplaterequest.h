// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATESYSTEMTEMPLATEREQUEST_H
#define QTAWS_DEPRECATESYSTEMTEMPLATEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeprecateSystemTemplateRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DeprecateSystemTemplateRequest : public IoTThingsGraphRequest {

public:
    DeprecateSystemTemplateRequest(const DeprecateSystemTemplateRequest &other);
    DeprecateSystemTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprecateSystemTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
