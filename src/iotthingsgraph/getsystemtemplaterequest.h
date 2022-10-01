// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSYSTEMTEMPLATEREQUEST_H
#define QTAWS_GETSYSTEMTEMPLATEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetSystemTemplateRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetSystemTemplateRequest : public IoTThingsGraphRequest {

public:
    GetSystemTemplateRequest(const GetSystemTemplateRequest &other);
    GetSystemTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSystemTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
