// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESYSTEMTEMPLATEREQUEST_H
#define QTAWS_UPDATESYSTEMTEMPLATEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class UpdateSystemTemplateRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT UpdateSystemTemplateRequest : public IoTThingsGraphRequest {

public:
    UpdateSystemTemplateRequest(const UpdateSystemTemplateRequest &other);
    UpdateSystemTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSystemTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
