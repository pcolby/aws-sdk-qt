// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATEVERSIONSREQUEST_H
#define QTAWS_LISTTEMPLATEVERSIONSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class ListTemplateVersionsRequestPrivate;

class QTAWSPINPOINT_EXPORT ListTemplateVersionsRequest : public PinpointRequest {

public:
    ListTemplateVersionsRequest(const ListTemplateVersionsRequest &other);
    ListTemplateVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTemplateVersionsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
