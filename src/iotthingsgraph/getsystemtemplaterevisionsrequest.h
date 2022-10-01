// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSYSTEMTEMPLATEREVISIONSREQUEST_H
#define QTAWS_GETSYSTEMTEMPLATEREVISIONSREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetSystemTemplateRevisionsRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetSystemTemplateRevisionsRequest : public IoTThingsGraphRequest {

public:
    GetSystemTemplateRevisionsRequest(const GetSystemTemplateRevisionsRequest &other);
    GetSystemTemplateRevisionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSystemTemplateRevisionsRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
