// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELSREQUEST_H
#define QTAWS_LISTMODELSREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListModelsRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListModelsRequest : public LookoutEquipmentRequest {

public:
    ListModelsRequest(const ListModelsRequest &other);
    ListModelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
