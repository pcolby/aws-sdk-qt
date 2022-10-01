// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCESCHEDULERSREQUEST_H
#define QTAWS_LISTINFERENCESCHEDULERSREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListInferenceSchedulersRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListInferenceSchedulersRequest : public LookoutEquipmentRequest {

public:
    ListInferenceSchedulersRequest(const ListInferenceSchedulersRequest &other);
    ListInferenceSchedulersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInferenceSchedulersRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
