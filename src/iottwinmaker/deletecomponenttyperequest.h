// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPONENTTYPEREQUEST_H
#define QTAWS_DELETECOMPONENTTYPEREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class DeleteComponentTypeRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT DeleteComponentTypeRequest : public IoTTwinMakerRequest {

public:
    DeleteComponentTypeRequest(const DeleteComponentTypeRequest &other);
    DeleteComponentTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteComponentTypeRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
