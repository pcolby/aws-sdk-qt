// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESYSTEMTEMPLATEREQUEST_H
#define QTAWS_DELETESYSTEMTEMPLATEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeleteSystemTemplateRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DeleteSystemTemplateRequest : public IoTThingsGraphRequest {

public:
    DeleteSystemTemplateRequest(const DeleteSystemTemplateRequest &other);
    DeleteSystemTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSystemTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
