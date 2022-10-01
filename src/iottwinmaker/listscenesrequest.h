// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCENESREQUEST_H
#define QTAWS_LISTSCENESREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class ListScenesRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT ListScenesRequest : public IoTTwinMakerRequest {

public:
    ListScenesRequest(const ListScenesRequest &other);
    ListScenesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListScenesRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
