// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTTYPESREQUEST_H
#define QTAWS_LISTCOMPONENTTYPESREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class ListComponentTypesRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT ListComponentTypesRequest : public IoTTwinMakerRequest {

public:
    ListComponentTypesRequest(const ListComponentTypesRequest &other);
    ListComponentTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentTypesRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
