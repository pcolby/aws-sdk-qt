// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCEEVENTSREQUEST_H
#define QTAWS_LISTINFERENCEEVENTSREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListInferenceEventsRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListInferenceEventsRequest : public LookoutEquipmentRequest {

public:
    ListInferenceEventsRequest(const ListInferenceEventsRequest &other);
    ListInferenceEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInferenceEventsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
